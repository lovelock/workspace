<?php
class CD
{
    public $tracks = array();
    public $band = '';
    public $title = '';

    public function __construct($title, $band, $tracks)
    {
        $this->title = $title;
        $this->band = $band;
        $this->tracks = $tracks;
    }
}

$cd = new CD($title, $band, $tracksFromExternalSource);


class CDUpperCase
{
    public static function makeString(CD $cd, $type)
    {
        $cd->$type = strtoupper($cd->$type);
    }

    public static function makeArray(CD $cd, $type)
    {
        $cd->$type = array_map('strtoupper', $cd->$type);
    }
}


class CDMakeXML
{
    public static function create(CD $cd)
    {
        $doc = new DomDocument();

        $root = $doc->createElement('CD');
        $root = $doc->appendChild($root);

        $title = $doc->createElement('TITLE', $cd->title);
        $title = $root->appendChild($title);

        $band = $doc->createElement('BAND', $cd->band);
        $band = $root->appendChild($band);

        $tracks = $doc->createElement('TRACKS', $cd->tracks);
        $tracks = $root->appendChile($tracks);

        foreach($cd->tracks as $track) {
            $track = $doc->createElement('TRACK', $track);
            $track = $track->appendChild($track);
        }

        return $doc->saveXML();
    }
}
?>
