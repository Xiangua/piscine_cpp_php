#!/usr/bin/php
<?php
function mini_split($str)
{
	$init_tab = explode(" ", $str);
	foreach ($init_tab as $elem)
	{
		if ($elem)
		{
			if (!$tab)
				$tab = array($elem);
			else
				array_push($tab, $elem);
		}
	}
	return ($tab);
}
if ($argc > 1)
{
	$tab = mini_split($argv[1]);
	$tmp = $tab[0];
	array_splice($tab, 0, 1);
	if ($tab)
		array_push($tab, $tmp);
	else
		echo "$tmp";
	$ct = 1;
	echo $tab[0];
	while ($tab[$ct])
	{
		echo " ".$tab[$ct];
		$ct++;
	}
	echo "\n";
}
?>
