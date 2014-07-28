<?php
class CDTrackListDecoratorCaps
{
    private $__CD;

    public function __construct(CD $cd)
    {
        $this->__cd = $cd;
    }

    public function makeCaps()
    {
        foreach ($this->__cd->trackList as &$track)
        {
            $track = strtoupper($track);
        }
    }
}
?>
