<?php
include_once 'fileNotFoundException.class.php';
include_once 'image.class.php';

abstract class baseImage implements image
{
    protected $path;
    protected $info;

    public function __construct($path)
    {
        $this->path = $path;

        if(!file_exists($this->path))
        {
            throw new fileNotFoundException("文件" . $path . "不存在");
        }
    }

    protected function createInfo()
    {
        $this->info['size'] = filesize($this->path);
        $this->info['type'] = filetype($this->path);
    }

    public function __get($k)
    {
        if($k == 'info')
        {
            $this->createInfo();
        }

        return $this->$k;
    }
}
?>
