<?php
   // setcookie() function to set a cookie
   setcookie("name", "John");       
   setcookie("age", "36");

   /*
   note: 
   you can write name and value of cookie directly in setcookie() function as shown above   
                            or
   you can also store the cookie name and cookie value in separate variables 
   and then provide those variables' names in setcookie() function as shown below:
        
        $cookie_name = "name";
        $cookie_value = "John";
        setcookie($cookie_name, $cookie_value); 
   */

?>
<html>
   
   <head>
      <title>Setting Cookies with PHP</title>
   </head>
   
   <body>
      <?php 
      echo "Set Cookies Example". "<BR>";
      echo "Value of name is: " . $_COOKIE['name'];
      echo "<BR>";
      echo "Value of age is: " . $_COOKIE['age'];
      ?>
   </body>
   
</html>