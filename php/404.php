<?php
class errorObject
{
    private $__error;

    public function __construct($error)
    {
        $this->__error = $error;
    }

    public function getError()
    {
        return $this->__error;
    }
}

class logToConsole
{
    private $__errorObject;
    public function __construct($errorObject)
    {
        $this->__errorObject = $errorObject;
    }

    public function write()
    {
        fwrite(STDERR, $this->__errorObject->getError());
    }
}

/*
 *create the new 404 error object
 */
$error = new errorObject("404: Not Found");

/*
 *write the error to the console
 */
$log = new logToConsole($error);
$log->write();
?>
