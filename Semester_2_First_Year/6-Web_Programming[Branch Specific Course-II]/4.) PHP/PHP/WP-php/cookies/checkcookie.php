<html>
   
   <head>
      <title>check if a cookie is set or not</title>
   </head>
   
   <body>
      
      <?php
         if( isset($_COOKIE["name"]))                           #isset() function - used to check if a cookie is set or not
            echo "Welcome " . $_COOKIE["name"] . "<br />";
         
         else
            echo "Sorry... Not recognized" . "<br />";
      ?>
      
   </body>
</html>