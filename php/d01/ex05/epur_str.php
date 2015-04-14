#!/usr/bin/php
<?PHP
if ($argc == 2)
{
	$clean = trim($argv[1]);
	$clean = preg_replace('/\s+/', ' ', $clean);
	echo "$clean\n";
}
?>
