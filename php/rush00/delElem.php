<?PHP
	session_start();
	if (isset($_SESSION['username']) && ($_SESSION['rangUser'] == 1) && (isset($_GET['delElem'])) && ($_GET['obj'] == "user")){
		if ($f = fopen('/nfs/zfs-student-2/users/2013/folier/mamp/apps/rush00/htdocs/bdd/user.csv', 'r+')){
		// if ($f = fopen('/Applications/MAMP/htdocs/bdd/user.csv', 'r+')){
		
			$tabUser = array();
			$delElem = $_GET['delElem'];
			if ($delElem === "franck" || $delElem === "alice")
				header('location: adm.php');
			while (($buff = fgetcsv($f, 4096, ":")) !== false) {
				if (!($delElem === "$buff[1]")){
					array_push($tabUser, $buff);
				}
			}
			fclose($f);
			require_once('includes/layout.html');
			if (isset($_POST['submit'])){
				if ($_POST['elemDel'] === $delElem){
					if ($f = fopen('/nfs/zfs-student-2/users/2013/folier/mamp/apps/rush00/htdocs/bdd/user.csv', 'w')){
						// if ($f = fopen('/Applications/MAMP/htdocs/bdd/user.csv', 'w')){
						foreach($tabUser as $data)
							fputcsv($f, $data, ":");
					}
					fclose($f);
					header('location: adm.php');
				} else {
					echo "invalide";
				}
			}
		}
	}
	print_r($_SESSION);
	echo "<br />";
	print_r($_GET);
	if (isset($_SESSION['username']) && (isset($_GET['delElem'])) && ($_GET['obj'] == "produit")){
		$bdd = $_GET['bdd'].".csv";
		echo $bdd;
		if ($f = fopen('/nfs/zfs-student-2/users/2013/folier/mamp/apps/rush00/htdocs/bdd/'.$bdd, 'r+')){
			// if ($f = fopen('/Applications/MAMP/htdocs/bdd/produit.csv', 'r+')){
			$tabUser = array();
			$delElem = $_GET['delElem'];
			while (($buff = fgetcsv($f, 4096, ":")) !== false) {
				if (!($delElem == "$buff[0]")){
					array_push($tabUser, $buff);
				}
			}
			fclose($f);
			require_once('includes/layout.html');
			if (isset($_POST['submit'])){
				if ($_POST['elemDel'] === $delElem){
					if ($f = fopen('/nfs/zfs-student-2/users/2013/folier/mamp/apps/rush00/htdocs/bdd/'.$bdd, 'w')){
					// if ($f = fopen('/Applications/MAMP/htdocs/bdd/produit.csv', 'w')){
						foreach($tabUser as $data)
							fputcsv($f, $data, ":");
					}
					fclose($f);
					header('location: index.php');
				} else {
					echo "invalide";
				}
			}
		}
	}
?>