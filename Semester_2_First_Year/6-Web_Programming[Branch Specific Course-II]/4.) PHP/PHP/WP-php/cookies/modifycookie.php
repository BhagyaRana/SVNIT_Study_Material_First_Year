<?php

// note: 
// as you can know that we have already created cookie named 'name' in previous example (createcookie.php);
// now that you want to modify this cookie, you just need to set (again) that cookie using the setcookie() function.

$cookie_name = "name";
$cookie_value = "ABC";
setcookie($cookie_name, $cookie_value);         #To modify a cookie, just set (again) the cookie using the setcookie() function
echo "cookie value - " . $_COOKIE[$cookie_name];

/*
note: 
take a note while you run this example that - 
  
  for the very first time when you run this example - this above echo statement's output will be printed as 'cookie value - John' 
  (since the previously set value of cookie named 'name' is 'John')

  after that, when you reload the page you can see the new modified value of cookie named 'name' i.e. 'ABC'
*/

echo "<BR><BR><BR><BR>";

?>
<html>
<body>

<?php
if(!isset($_COOKIE[$cookie_name])) {
  echo "Cookie named '" . $cookie_name . "' is not set!";
} else {
  echo "Cookie '" . $cookie_name . "' is set!<br>";
  echo "Value is: " . $_COOKIE[$cookie_name];
}
?>

<p><strong>Note:</strong> You might have to reload the page to see the new value of the cookie.</p>


</body>
</html>


<!-- 

note - 
also try to give new cookie name (which isn't already exist) and understand output.
  you will see that if you give a new cookie name which isn't exist (say for ex: hello), 
  then for the first time when you run the example - 
    it will show you that - cookie isn't set; also give you 'Notice: Undefined index' because no cookie is set.
  and then when you reload the page, you can see the value of your cookie as well as the message 'cookie is set'.

-->