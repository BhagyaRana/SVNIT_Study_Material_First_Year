<!-- start a new PHP session and set some session variables -->


<!-- Note: The session_start() function must be the very first thing in your document. Before any HTML tags. -->


<?php
// Start the session
session_start();
?>

<html>
<body>

<?php
// Set session variables
$_SESSION["favcolor"] = "yellow";
$_SESSION["favanimal"] = "dog";
echo "Session variables are set.";
?>

</body>
</html>