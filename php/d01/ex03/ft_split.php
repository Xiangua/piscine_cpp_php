#!/usr/bin/php
<?PHP
function ft_split($str)
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
	sort($tab);
	return ($tab);
}
?>
