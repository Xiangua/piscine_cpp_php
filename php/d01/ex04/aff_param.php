#!/usr/bin/php
<?PHP
if ($argc > 1)
{
	array_splice($argv, 0, 1);
	foreach ($argv as $elem)
		echo "$elem\n";
}
?>
