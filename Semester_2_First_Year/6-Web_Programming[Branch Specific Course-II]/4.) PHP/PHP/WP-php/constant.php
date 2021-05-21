<?php
define("GREETING", "Welcome to WP!");    #constant with a case-sensitive name
echo GREETING;
echo GREETing;

echo "<BR>------------<BR>------------<BR>";

define("HELLO", "Hello World!", true);      #constant with a case-insensitive name
echo hello;
echo "<BR>";
echo heLLO;
?>