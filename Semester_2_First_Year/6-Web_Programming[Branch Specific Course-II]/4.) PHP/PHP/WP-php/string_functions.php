<?php

echo strlen("Hello world!"); 
echo "<BR>----------<BR>";

echo str_word_count("Hello world!");
echo "<BR>----------<BR>";
echo str_word_count("Hello world 123!@#$%");
echo "<BR>----------<BR>";

echo strrev("Hello world!");
echo "<BR>----------<BR>"; 

echo strpos("Hello world!", "world");
echo "<BR>----------<BR>";
echo strpos("Hello world!", "o");
echo "<BR>----------<BR>";

echo str_replace("world", "WP", "Hello world!");
echo "<BR>----------<BR>";
echo str_replace("o", "0", "Hello world!");
echo "<BR>----------<BR>";
?>