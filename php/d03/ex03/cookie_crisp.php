<?php
if (!isset($_GET["action"]) || !isset($_GET["name"]))
	exit();
switch ($_GET["action"]) {
case 'set':
	if (!isset($_GET["value"]))
		$value = "";
	else
		$value = $_GET["value"];
	setcookie($_GET['name'], $value, time() + 3600);
	break;
case 'get':
	if (isset($_COOKIE[$_GET['name']]))
		echo $_COOKIE[$_GET['name']] . "\n";
	break;
case 'del':
	setcookie($_GET["name"], "", -1);
	break;
default:
	break;
}
?>
