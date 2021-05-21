<html>
   
   <head>
      <title>Accessing Cookies with PHP</title>
   </head>
   
   <body>
      
      <?php
         echo $_COOKIE["name"]. "<br />";    
         
         echo $_COOKIE["age"] . "<br />";

         # since we have already set cookies named 'name' & 'age' in previous example, 
         # we can access/retrieve their values here by using $_COOKIE

         # inside $_COOKIE - provide the name of the cookie whose value you want to print 
         # hence, in this example it is 'name' and 'age'
      ?>
      
   </body>
</html>