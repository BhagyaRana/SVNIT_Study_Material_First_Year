<?php               #logical operator
$x = 100;  
$y = 50;

if ($x == 100 xor $y == 80) {
    echo "Hello world!";
}
echo "<br>";
$x = 100;  

if ($x !== 90) {
    echo "Hello wp!";
}                   #logical operator

echo "<BR>";
?>          

<?php               #Conditional Assignment operator               

   // if empty($user) = TRUE, set $status = "anonymous"                 #just for understanding
   echo $status = (empty($user)) ? "anonymous" : "logged in";
   echo("<br>");

   $user = "John Doe";
   // if empty($user) = FALSE, set $status = "logged in"                #just for understanding
   echo $status = (empty($user)) ? "anonymous" : "logged in";
?> 