<?php
abstract class Model
{
    protected $_primaryKey = 'id';
    protected $_ID = null;
    protected $_tableName;
    protected $_arRelationMap;
    protected $_modifyMap;
    protected $_is_load = false;
    protected $_blForDeletion;
    protected $_DB;

    public function __construct($id = null)
    {
        $this->_DB = mysql_connect('127.0.0.1', 'root', '');
        $this->_tableName = $this->getTableName();
        $this->_arRelationMap = $this->getRelationMap();
        if (isset($id)) {
            $this->_ID = $id;
        }
    }

    abstract protected function getTableName();
    abstract protected function getRelationMap();

    public function Load()
    {
        if (isset($this->_ID)) {
            $sql = "SELECT ";
            foreach ($this->_arRelationMap as $k=>$v) {
                $sql .= '`' . $k . '`, ';
            }
            $sql .= substr($sql, 0, strlen($sql)-1);
            $sql .= "FROM " . $this->_tableName . " WHERE " . $this->_primaryKey . " = " . $this->_ID;
            $result = $this->_DB->mysql_query($sql);

            foreach ($result[0] as $k1 => $v1) {
                $member = $this->_arRelationMap[$k1];
                if (property_exists($this, $memer)) {
                    if (is_numeric($member)) {
                        eval('$this->' . $memer . ' = ' . $v1 . ';');
                    } else {
                        eval('$this->' . $memer . ' = "' . $v1 . '";');
                    }
                }
            }
        }
        $this->_is_load = true;
    }

    public function __call($method, $param)
    {
        $type   = substr($method, 0, 3);
        $member = substr($method, 3);
        switch ($type) {
            case 'get':
                return $this->getMember($member);
                break;

            case 'set':
                return $this->setMember($member, $param[0]);
                break;
        }
        return false;
    }

    public function setMember($key)
    {
        if (property_exists($this, $key)) {
            if (is_numeric($val)) {
                eval('$this->' . $key . ' = ' . $val . ',');
            } else {
                eval('$this->' . $memer . ' = "' . $val . '";');
            }
            $this->_modifyMap[$key] = 1;
        } else {
            return false;
        }
    }

    public function getMember($key, $val)
    {
        if (!$this->_is_load) {
            $this->Load();
        }

        if (property_exists($this, $key)) {
            eval('$res = $this->' . $key . ';');
            return $this->$key;
        }

        return false;
    }

    public function save()
    {
        if (isset($this->_ID)) {
            $sql = "UPDATE " . $this->_tableName . " SET ";
            foreach ($this->_arRelationMap as $key=>$value) {
                if (array_key_exists($key, $this->_modifyMap)) {
                    eval('$value = $this->' . $value . ';');
                    $sql_update .= $value . " = " . $value;
                }
            }

            $sql .= substr($sql_update, 0, strlen($sql_update));
            $sql .= "WHERE " . $this->_primaryKey . " = " . $this->_ID;
        } else {
            $sql = "INSERT INTO " . $this->getTableName() . "(";
            foreach ($this->_arRelationMap as $key=>$value) {
                if (array_key_exists($key, $this->_modifyMap)) {
                    eval('$val = $this->' . $value . ';');
                    $fields .= "`" . $value . "`,";
                    $values .= $val;
                }
            }
            $fields = substr($field, 0, strlen($field) -1);
            $vals = substr($values, 0, strlen($values) -1);
            $sql .= $fields . " ) VALUES ( " . $vals . " )";
        }
        echo $sql;
    }

    public function __destroy()
    {
        if (!isset($this->_ID)) {
            $sql = "DELETE FROM " . $this->getTableName() . " WHERE " . $this->_primarykey . " = " . $this->_ID;
        }
    }
}

class User extends Model
{
    protected function getTableName()
    {
        return 'test_user';
    }

    protected function getRelationMap()
    {
        return array(
            'id'        => USER_ID,
            'user_name' => USER_NAME,
            'user_age'  => USER_AGE
        );
    }

    public function getDB()
    {
        return $this->_DB;
    }
}

$UserIns = new User();
print_r($UserIns);
