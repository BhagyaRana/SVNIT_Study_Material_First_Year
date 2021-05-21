<html>
<head>
    <title>Sign Up Page</title>
</head>
<body>

<form method="post">
    Username: <input type="text" name="uname"><br><br>
    Password: <input type="password" name="pass1"><br><br>
    Confirm Password: <input type="password" name="pass2"><br><br>
    <input type="submit" name="submit" value="Log in">
</form>

</body>
</html>

<?php

if (isset($_POST['submit']))
{
    $username = $_POST['uname'];
    $password1 = $_POST['pass1'];
    $password2 = $_POST['pass2'];

    if (strlen($username) <= 8)
    {
        echo "<span style='color: red;'> Username should be more than 8 characters </span> <br><br>";
    }
    if(strlen($password1) <= 6)
    {
        echo "<span style='color: red;'> password should be more than 6 characters </span> <br><br>"; 
    }
    if($password1 != $password2)
    {
        echo "<span style='color: red;'> Both passwords should be same </span>"; 
    }
}

?>