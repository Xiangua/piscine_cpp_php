<?PHP

class Color {

	private $red;
	private $green;
	private $blue;
	public static $verbose = false;

  function __construct( array $color){
    if (array_key_exists('red', $color) && array_key_exists('green', $color) && array_key_exists('blue', $color)){
      $this->red = $color['red'];
      $this->green = $color['green'];
      $this->blue = $color['blue'];
    }
    else if (array_key_exists('rgb', $color)){
      $base = intval($color['rgb']);
      $r = ($base & 0xff0000) >> 16;
      $g = ($base & 0x00ff00) >> 8;
      $b = $base & 0x0000ff;
      $this->red = $r;
      $this->green = $g;
      $this->blue = $b;
    }
		if (Color::$verbose === true){
	    printf("Color( red: %3d, green: %3d, blue: %3d ) constructed." . PHP_EOL, $this->red, $this->green, $this->blue);
		}
		return;
	}

	function __destruct(){
		if (Color::$verbose === true){
	    printf("Color( red: %3d, green: %3d, blue: %3d ) destructed." . PHP_EOL, $this->red, $this->green, $this->blue);
		}
		return;
	}

	function __toString(){
	  return (sprintf("Color( red: %3d, green: %3d, blue: %3d )", $this->red, $this->green, $this->blue));
	}

	static function doc(){
		$fd = fopen("color.doc.txt", r);
		while (($buff = fgets($fd, 2048)))
			print($buff);
		fclose($fd);
	}

  function add( Color $add){
    $r = intval($this->red) + intval($add->getRed());
    if ($r > 255) $r = 255;
    $g = intval($this->green) + intval($add->getGreen());
    if ($g > 255) $g = 255;
    $b = intval($this->blue) + intval($add->getBlue());
    if ($b > 255) $b = 255;
    $tab = array("red" => $r, "green" => $g, "blue" => $b);
    return (new Color($tab));
	}

	function sub(Color $sub){
    $r = intval($this->red) - intval($sub->getRed());
    if ($r < 0) $r = 0;
    $g = intval($this->green) - intval($sub->getGreen());
    if ($g < 0) $g = 0;
    $b = intval($this->blue) - intval($sub->getBlue());
    if ($b < 0) $b = 0;
    $tab = array("red" => $r, "green" => $g, "blue" => $b);
    return (new Color($tab));	
	}

  function mult($mult){
    if (is_numeric($mult)){
     return (new Color(array('red' => ($this->red * $mult), 'green' => ($this->green * $mult), 'blue' => ($this->blue * $mult)))); 
    }
  }
  function getRed(){return ($this->red);}
  function getGreen(){return ($this->green);}
  function getBlue(){return ($this->blue);}
}

?>
