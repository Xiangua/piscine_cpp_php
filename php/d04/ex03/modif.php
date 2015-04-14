<?php
if ($_POST['login'] === "" || $_POST['oldpw'] === "" || $_POST['newpw'] === "" || $_POST['submit'] !== "OK")
{
	echo "ERROR\n";
	return;
}
$oldpw = hash("whirlpool", $_POST['oldpw']);
$newpw = hash("whirlpool", $_POST['newpw']);
if (file_exists("../ex02/private/passwd"))
{
	$to_cmp = file_get_contents("../ex02/private/passwd");
	$to_cmp = unserialize($to_cmp);
	foreach ($to_cmp as &$account) {
		if ($account['login'] == $_POST['login'])
		{
			if ($account['passwd'] == $oldpw)
				{
					$account['passwd'] = $newpw;
					echo "OK\n";
					file_put_contents("../ex02/private/passwd", serialize($to_cmp));
					return;
				}
		}
	}
}
echo "ERROR\n";
?>
