<?php
class userDAO extends baseDAO
{
    protected $__tableName = 'userTable';
    protected $__primaryKey = 'id';

    public function getUserByFirstName($name)
    {
        $result = $this->fetch($name, 'firstName');
        return $result;
    }
}
?>
