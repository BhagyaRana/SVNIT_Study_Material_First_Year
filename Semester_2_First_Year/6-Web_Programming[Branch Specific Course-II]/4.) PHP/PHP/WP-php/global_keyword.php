<?php
// $x = 5;
// $y = 10;

// function myTest() {
//     global $x, $y;
//     $y = $x + $y;
//     echo $y;
//     echo "<BR/>";
// }

// myTest();
// echo $y;
?>


<?php
// $x = 5;
// $y = 10;

// function myTest() {

//     $GLOBALS['y'] = $GLOBALS['x'] + $GLOBALS['y'];
//     echo $GLOBALS['y'];
//     echo "<br>";

// } 

// myTest();
// echo $y;
// echo "<br>";
// echo $GLOBALS['y'];
// echo "<br>";
?>



<?php
$x=10;

function sum() {
    $y = 20;
    // $add = $x + $y;
    $add = $GLOBALS['x'] + $y;          //adding global var(i.e $x) and local var(i.e. $y) using $GLOBALS)
    echo $add;
}
sum();
?>