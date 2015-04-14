#!/usr/bin/php
<?PHP
if (count($argv) == 4){
	array_splice($argv, 0, 1);
	$ope = trim($argv[1], "\t ");
	$val1 = trim($argv[0], "\t ");
	$val2 = trim($argv[2], "\t ");
	if ($ope == "+"){
		$res = $val1 + $val2;
		echo "$res\n";	
	} else if ($ope == "/"){
		$res = $val1 / $val2;
		echo "$res\n";	
	} else if ($ope == "*"){
		$res = $val1 * $val2;
		echo "$res\n";	
	} else if ($ope == "-"){
		$res = $val1 - $val2;
		echo "$res\n";	
	} else if ($ope == "%"){
		$res = $val1 % $val2;
		echo "$res\n";	
	}
} else {
	echo "Incorrect Parameters\n";
}
?>
