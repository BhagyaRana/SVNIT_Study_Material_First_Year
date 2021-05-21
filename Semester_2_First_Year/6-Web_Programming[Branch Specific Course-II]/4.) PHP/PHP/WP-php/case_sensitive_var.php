<html>
<body>

<?php
$color = "red";

#only the first statement will display the value of the $color variable! 
#This is because $color, $COLOR, and $coLOR are treated as three different variables

echo "My car is " . $color . "<br>";
echo "My house is " . $COLOR . "<br>";
echo "My boat is " . $coLOR . "<br>";       

?>

</body>
</html>