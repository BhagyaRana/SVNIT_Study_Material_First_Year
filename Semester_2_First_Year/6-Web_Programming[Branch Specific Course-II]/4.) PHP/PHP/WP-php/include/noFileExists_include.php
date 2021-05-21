<!-- (here there is no file called 'hello.php' exists) 

when a file is included with the include statement and PHP cannot find it, the script will continue to execute 
(so 'I have a .' will be printed) -->

<html>
<body>

<h1>Welcome !</h1>
<?php include 'hello.php';
echo "I have a $color $car.";
?>

</body>
</html>

<!-- NOTE − 
You may get plain warning messages or fatal error messages or nothing at all. 
This depends on your PHP Server configuration. -->