<?php
   setcookie("Username", $_POST['uname']);
   setcookie("Phno", $_POST['phno']);
?>
<html>
   
   <head>
      <title>Setting Cookies with PHP</title>
   </head>
   
   <body>
      <?php echo "Set Cookies";
      echo "<BR>";
      ?>

   </body>
   
   <?php
    if(!isset($_COOKIE['Username'])) {
        echo "Cookie named '" . 'Username' . "' is not set!";
        echo "<BR>";
        echo "sorry... user not recognized";
    } else {
    echo "Cookie '" . 'Username' . "' is set!<br>";
    echo "<BR>";
    echo "Welcome " . $_COOKIE['Username'];
    }
    ?>

</html>