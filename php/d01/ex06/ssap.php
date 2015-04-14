#!/usr/bin/php
<?PHP
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
	array_splice($argv, 0 ,1);
	foreach($argv as $elem)
	{
		$tab_tmp = mini_split($elem);
		if (!$tab)
			$tab = $tab_tmp;
		else
			$tab = array_merge($tab, $tab_tmp);
	}
	sort($tab);
	foreach($tab as $lem)
		echo "$lem\n";
}
?>
