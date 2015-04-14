<?php

session_start();
if ((isset($_GET["Submit"])) && ($_GET["Submit"] == "OK"))
{
	$_SESSION["passwd"] = $_GET["passwd"];
	$_SESSION["login"] = $_GET["login"];
}
?>

<html>
<body>

<form action="index.php" method="get">
    Identifiant: <input name="login" value="<?php if (isset($_SESSION["login"])) echo $_SESSION["login"]; ?>">
    <br />
    Mot de passe: <input name="passwd" value="<?php if (isset($_SESSION["passwd"])) echo $_SESSION["passwd"]; ?>">
    <input type="submit" name="Submit" value="OK">
</form>
</body>
</html>
