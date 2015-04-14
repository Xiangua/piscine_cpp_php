<?PHP
function ft_is_sort($tab)
{
	if (!is_array($tab))
		return false;
	$tmp = $tab;
	sort($tmp);
	if ($tmp == $tab)
		return (TRUE);
	return (FALSE);
}
?>
