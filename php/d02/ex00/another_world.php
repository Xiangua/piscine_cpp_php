#!/usr/bin/php
<?php
if ($argc >1)
{	
	$subject = array(' ', '');
	$pattern = array('/\s+/', '/\t+/');
	$argv[1] = trim($argv[1]);
	$argv[1] = preg_replace($pattern, $subject, $argv[1]);
	echo "$argv[1]\n";
}
?>
