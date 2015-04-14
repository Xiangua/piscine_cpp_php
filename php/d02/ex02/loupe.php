#!/usr/bin/php
<?PHP

function str_caps($match){
	return (strtoupper($match[0]));
}

function str_caps_bite($match){
	$tab = explode("=", $match[0]);
	$final = strtoupper($tab[1]);
	return (" title=".$final);
}

function match_replace($match){
	$match[0] = preg_replace_callback("/>[\w éè\s\.]+</", "str_caps", $match[0]);
	$match[0] = preg_replace_callback("/ title=\"[\w éè\s\.]+\"/", "str_caps_bite", $match[0]);
	return ($match[0]);
}

if ($argc == 2){
	if (!($fd = fopen($argv[1], "r"))){
		echo "Nom du fichier non valide\n";
		return (0);
	}
	$line = fread($fd, filesize($argv[1]));
	$loop = 1;
	$offset = 0;
	$match = array();
	$line = preg_replace_callback("/<a [\wèé=\"':\/\. \'><;@&\?%\$\#\n\r\t\!,\[\]-]+<\/a>/iU", "match_replace", $line);
	echo "$line";
	fclose($fd);
}

?>