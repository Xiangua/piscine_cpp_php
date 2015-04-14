<?php
if ($_POST['login'] === "" || $_POST['passwd'] === ""  || $_POST['submit'] == "")
{
	echo "ERROR\n";
	return;
}
if ($_POST['submit'] !== "OK")
{
	echo "ERROR\n";
	return;
}
$pass = hash("whirlpool", $_POST['passwd']);
$data = array("login" => $_POST['login'],"passwd" => $pass);
if (file_exists("./private/passwd"))
{
	$to_cmp = file_get_contents("./private/passwd");
	$to_cmp = unserialize($to_cmp);
	foreach ($to_cmp as $account) {
		if ($account['login'] == $_POST['login'])
		{
			echo "ERROR\n";
			return;
		}
	}
	array_push($to_cmp, $data);
	file_put_contents("./private/passwd", serialize(($to_cmp)));
}
else
{
	if (!file_exists("./private/"))
		mkdir("./private");
	file_put_contents("./private/passwd", serialize(array($data)));
}
echo "OK\n";
?>
