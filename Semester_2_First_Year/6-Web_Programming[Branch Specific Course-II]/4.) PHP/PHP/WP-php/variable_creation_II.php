<?php
$a = 'hello';
$$a = 'world';

echo "$a ${$a}";

echo "</br>";
echo "$a $hello";

print "</br>";
print "$a $$a";
echo "</br>";

// -------------------------------//
$txt = 1;
echo $txt;
echo "</br>";
$txt ="I AM NOW A STRING";
echo $txt;
?>