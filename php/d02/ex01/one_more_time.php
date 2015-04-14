#!/usr/bin/php
<?php
function chack_day($str) {	
	return (preg_match("/\blundi\b|\bmardi\b|\bmercredi\b|\bjeudi\b|\bvendredi|\bsamedi\b|\bdimanche\b/i", $str));
}
function check_hours($str){
	return (preg_match("#^(?:[0-1][0-9]|2[0-3])(?:\:[0-5][0-9]){2}$#", $str));
}
function mount_remplace($str){
	$pattern = array("/[Jj]anvier/", "/[Ff]evrier/", "/[Mm]ars/", "/[Aa]vril/", "/[Mm]ai/", "/[Jj]uin/", "/[Jj]uillet/", "/[Aa]out/", "/[Ss]eptembre/", "/[Oo]ctobre/", "/[Nn]ovembre/", "/[Dd]ecembre/");
	$remplace = array("1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12");
	return (preg_replace($pattern, $remplace, $str));
}

if ($argc == 2) {
	$date = preg_split('/\s/', $argv[1]);
	$mount = mount_remplace($date[2]);
	if ((count($date) != 5) || !chack_day($date[0]) || !check_hours($date[4]) || !checkdate($date[1], $mount, $date[3])){	
		echo "Wrong Format\n";
		return ;
	}
	$hours = preg_split('/\:/', $date[4]);
	date_default_timezone_set('Europe/Paris');
	echo mktime($hours[0], $hours[1], $hours[2], $mount, $date[1], $date[3])."\n";
}
?>
