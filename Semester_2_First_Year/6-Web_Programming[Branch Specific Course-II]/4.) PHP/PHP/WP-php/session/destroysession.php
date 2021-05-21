<?php
session_start();
?>
<!DOCTYPE html>
<html>
<body>

<?php
// remove all session variables
session_unset();

// destroy the session
session_destroy();

// check by printing values
echo $_SESSION["favcolor"];
echo "<BR>";
echo $_SESSION["favanimal"];

// note -
// you will get 'Notice: Undefined index:' since, all session variables are removed and session is destroyed.

?>

</body>
</html>