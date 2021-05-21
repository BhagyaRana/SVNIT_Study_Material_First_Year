<html>
<body>

<form action="" method="post">
No1: <input type="text" name="no1"><br><br>
No2: <input type="text" name="no2"><br><br>
<input type="submit" name="submit" value="click to add">
</form>

</body>
</html>

<?php

if (isset($_POST['submit']))
{
    $no1 = $_POST['no1'];
    $no2 = $_POST['no2'];

    if($no1=="" || $no2=="")
    {
        echo "All the fields are required!";
    }
    else 
    {
        $sum = $no1 + $no2;
        echo $sum;
    }
}

?>