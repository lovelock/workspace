<?php
class logToCSV
{
    const CSV_LOCATION = 'log.csv';

    private $__errorObject;

    public function __construct($errorObject)
    {
        $this->__errorObject = $errorObject;
    }

    public function write()
    {
        $line = $this->__errorObject->getErrorNumber();
        $line .= ',';
        $line .= $this->__errorObject->getErrorText();
        $line .= "\n";

        file_put_contents(self::CSV_LOCATION, $line, FILE_APPEND);
    }
}
?>
