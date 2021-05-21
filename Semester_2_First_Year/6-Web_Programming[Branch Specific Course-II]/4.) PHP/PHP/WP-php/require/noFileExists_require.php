<!-- (here there is no file called 'hello.php' exists) 

when a file is included with the require statement and PHP cannot find it, 
the require() function generates a fatal error and halts the execution of the script.

so here the echo statement will not be executed because the script execution dies after the require statement returned a fatal error -->

<html>
<body>

<h1>Welcome !</h1>
<?php require 'hello.php';
echo "I have a $color $car.";
?>

</body>
</html>

<!-- so as you can compare both the examples, you can see that Welcome! will be printed in both examples
in include example echo statement will also execut but in require example echo won't be executed since script execution dies after require statement-->

<!-- NOTE − 
You may get plain warning messages or fatal error messages or nothing at all. 
This depends on your PHP Server configuration. -->