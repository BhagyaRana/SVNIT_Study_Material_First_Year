<!-- change a session variable -->

<?php
session_start();
?>

<html>
<body>

<?php
// to change a session variable, just overwrite it
$_SESSION["favcolor"] = "red";
echo $_SESSION["favcolor"];
echo "<BR>";
echo $_SESSION["favanimal"];
?>

</body>
</html>