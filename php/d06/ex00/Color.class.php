<?PHP

class Color {

	private $red;
	private $green;
	private $blue;
	public static $verbose = false;

	function __construct( array $color){
		if (Color::$verbose === true){
			print("Color( red: $this->red, green: $this->green, blue: $this->blue ) constructed." . PHP_EOL);
		}
		return;
	}

	function __destruct(){
		if (Color::$verbose === true){
			print("Color( red: $this->red, green: $this->green, blue: $this->blue ) destructed." . PHP_EOL);
		}
		return;
	}

	function __toString(){
		print("Color( red: $this->red, green: $this->green, blue: $this->blue )" . PHP_EOL);
	}

	static function doc(){
		$fd = fopen("color.doc.txt", r);
		while (($buff = fgets($fd, 2048)))
			print($buff);
		fclose($fd);
	}

	function add( Color $add){
		
	}

	function sub(Color $sub){
	
	}

	function mult($mult){
	
	}
}

?>
