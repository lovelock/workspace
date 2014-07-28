<?php
abstract class baseDAO
{
    private $__connection;

    public function __construct()
    {
        $this->__connectToDB(DB_USER, DB_PASS, DB_HOST, DB_DATABASE);
    }

    private function __connectToDB($user, $pass, $host, $database)
    {
        $this->__connection = mysql_connect($host, $user, $pass);
        mysql_select_db($database, $this->__connection);
    }

    public function fetch($value, $key = NULL)
    {
        if (is_null($key))
        {
            $key = $this->__primaryKey;
        }

        $sql = "SELECT * FROM {$this->__tableName} WHERE {$key} = '{$value}'";
        $results = mysql_query($sql, $this->__connection);

        $rows = array();
        while ($results = mysql_fetch_array($results))
        {
            $rows[] = $result;
        }
        return $rows;
    }

    public function update($keyedArray)
    {
        $sql = "UPDATE {$this->__tableName} SET ";

        $updates = array();

        foreach ($keyedArray as $column=>$value)
        {
            $updates[] = "{$column} = '{$value}'";
        }

        $sql .= implode(',', $updates);
        $sql .= "WHERE {$this->__primaryKey} = '{$keyedArray[$this->__primaryKey]}'";
        mysql_query($sql, $this->connection);
    }
}
?>
