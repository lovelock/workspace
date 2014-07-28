<?php
include 'people.interface.php';

class worker implements people
{
    private $name;
    private $age;

    public function __construct($name, $age)
    {
        $this->name = $name;
        $this->age = $age;
    }

    public function say()
    {
        echo $this->name . ', age is ' . $age . '<br />';
    }

    public function __get($k)
    {
        if($k == 'name') {
            trigger_error("禁止访问私有成员:" .$k, E_USER_ERROR);
            return;
        }
        return $this->$k;
    }
}
?>
