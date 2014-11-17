<?php
header("Content-type:image/gif");
passthru("/usr/bin/ppm2tiff /usr/share/tk8.4/demos/images/teapot.ppm");
?>
