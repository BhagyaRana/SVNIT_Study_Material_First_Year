<?php
$x = "Hello world!";    #string
echo $x;
echo "<br>";
var_dump($x);
echo "<br>";

$x = 5985;              #int
var_dump($x);
echo "--------<br>";
var_dump(is_int($x));
echo "<br>";

$y = 10.365;            #float
echo $y;
echo "<br>";
var_dump($y);
echo "-------<br>";
var_dump(is_int($y));
echo "------<br>";
var_dump(is_float($y));
echo "<br>==========";

$x = true;              #boolean - often used in conditional testing
$y = false;
var_dump($x);
echo "<br>";

$cars = array("Volvo","BMW","Toyota");          #array stores multiple values in one single variable
echo $cars;
echo "<br>";
var_dump($cars);
echo "<br>";

$y = "Hello world!";
$y = null;
echo $y;        #nothing will be printed
echo "<br>";
var_dump($y);
echo "<br>";
$y = "Hello world!";
var_dump($y);
echo "<br><BR><BR>";


// Cast float to int
$x = 23465.768;
$int_cast = (int)$x;
echo "-----------",$int_cast;

echo "<br>";

// Cast string to int
$x = "abcd";          # $x="abcd";
$int_cast = (int)$x;
echo $int_cast;


?>