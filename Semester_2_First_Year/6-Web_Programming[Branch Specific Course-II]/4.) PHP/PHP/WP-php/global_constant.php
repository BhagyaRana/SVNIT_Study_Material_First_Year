<!-- example uses a constant inside a function, even if it is defined outside the function -->


<?php
define("GREETING", "Welcome to WP!");

function myTest() {
  echo GREETING;
}
 
myTest();

echo "<BR>";
echo GREETING;
?> 