#!/usr/bin/php
<?PHP
while (42)
{
	echo "Entrez un nombre: ";
	$out = fgets(STDIN);
	$out = trim($out, "\n\r");
	$var = $out;
	if (feof(STDIN))
	{
		echo "\n";
		return ;
	}
	if (is_numeric($out) == 1)
	{
		if ($out < 0)
			$out = -$out;
		while ($out > 1)
			$out = $out % 2;
		if ($out == 0)
			echo "Le chiffre $var est Pair\n";
		else
			echo "Le chiffre $var est Impair\n";
	}
	else
		echo "'$out' n'est pas un chiffre\n";
}
?>
