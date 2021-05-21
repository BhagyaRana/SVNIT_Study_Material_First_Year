<?php
    // set the expiration date to one hour ago
    setcookie("user", "ABC", time() - 3600);               #To delete a cookie, use the setcookie() function with an expiration date in the past
?>
<html>
   
   <head>
      <title>Deleting Cookies with PHP</title>
   </head>
   
   <body>
      <?php 
      echo "Cookie 'user' is deleted";
      echo "<BR>";
      echo $_COOKIE['user'];     
      // since cookie named 'user' is deleted, if we try to retrieve its value using $_COOKIE,
      // we get 'Notice: Undefined index: user' - because that 'user' cookie has already been deleted.
      ?>
   </body>
   
</html>