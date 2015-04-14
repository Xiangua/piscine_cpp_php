#!/usr/bin/php
<?PHP
	if (!($fd = fopen("/var/run/utmpx", "r"))) {
		echo "fopen Error\n";
		return (0);
	}
	$size = filesize("/var/run/utmpx");
	$line = fread($fd, $size);
	$out =  unpack("a256login/a4id/a32line/ipid/itype/itime", $line);
	print_r($out);
?>