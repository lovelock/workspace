<?php
if (strpos($_POST['email'], '@') === false) {
    print 'There is no @ in the email address';
}
