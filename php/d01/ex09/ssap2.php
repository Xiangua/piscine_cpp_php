#!/usr/bin/php
<?PHP
function mgr_tab($tab, $insert_tab){
	if (!$tab){
		$tab = array($insert_tab);
	}
	else
		array_push($tab, $insert_tab);
	return ($tab);
}

function mini_split($str){
	$init_tab = explode(" ", $str);
	foreach($init_tab as $elem){
		if ($elem)
			$tab = mgr_tab($tab, $elem);
	}
	return ($tab);
}

if (count($argv) > 1) {
	array_splice($argv, 0, 1);
	$glob = array();
	foreach ($argv as $elem)
		$glob = array_merge($glob, explode(" ", $elem));
	foreach($glob as $elem){
		$fcs = ord($elem);
		if (($fcs > 64 && $fcs < 91) || ($fcs > 96 && $fcs < 123))
			$string_tab = mgr_tab($string_tab, $elem);
		elseif ($fcs > 47 && $fcs < 58)
			$number_tab = mgr_tab($number_tab, $elem);
		else
			$other_tab = mgr_tab($other_tab, $elem);	
	}
	if ($string_tab){
		sort($string_tab, SORT_STRING | SORT_FLAG_CASE);
		foreach($string_tab as $elem)
			echo "$elem\n";
	}
	if ($number_tab){
		sort($number_tab, SORT_STRING);
		foreach($number_tab as $elem)
			echo "$elem\n";
	}
	if ($other_tab){
		sort($other_tab);
		foreach($other_tab as $elem)
			echo "$elem\n";
	}
}
?>
