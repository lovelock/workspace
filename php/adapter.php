<?php
class logToCSVAdapter extends errorObject
{
    private $__errorNumber, $__errorText;

    public function __construct($error)
    {
        parent::__construct($error);

        $parts = explode(':', $this->getError());

        $this->__errorNumber = $parts[0];
        $this->__errorText = $parts[1];
    }


}
?>
