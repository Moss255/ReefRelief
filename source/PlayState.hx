package;

import flixel.FlxG;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.util.FlxStringUtil;
import flixel.tile.FlxTilemap;
import openfl.Assets;
import flixel.math.FlxRandom;
import flixel.math.FlxPoint;

class PlayState extends FlxState
{


	private var _level:FlxTilemap;

	private var _player:Player;

	private var _scoreText:FlxText;
	private var _popupText:FlxText;
	private var _livesText:FlxText;

	private var _pickup:Array<Pickup>;
	private var _debris:Array<Debris>;

	private var _enemy:Array<Enemy>;
	
	private var _score:Int = 0;
	private var _crateTotal:Int = 0;

	private var _random:FlxRandom;
	private var xNumbers:Array<Int>;
	
	override public function create():Void
	{
		super.create();

		FlxG.mouse.visible = false;

		FlxG.state.bgColor = 0xFF081A59; // backgroundColour;

		// Instanating the "FlxRandom" class

		_random = new FlxRandom();

		_pickup = new Array<Pickup>();

		_debris = new Array<Debris>();

		// Pickup locations on map

		_pickup.insert(0, new Pickup(32, 148));
		_pickup.insert(1, new Pickup(84, 372));
		_pickup.insert(2, new Pickup(168, 436));
		_pickup.insert(3, new Pickup(532, 276));
		_pickup.insert(4, new Pickup(416, 180));
		_pickup.insert(5, new Pickup(544, 180));
		_pickup.insert(6, new Pickup(596, 372));
		_pickup.insert(7, new Pickup(388, 308));
		_pickup.insert(8, new Pickup(255, 281));
		_pickup.insert(9, new Pickup(180, 180));


		// Generate number of crates that the player needs to grab
		_crateTotal = _random.int(5, 9);

		// excluding numbers array
		xNumbers = new Array<Int>();

		// Loop for placing the crates around
		for (i in 0..._crateTotal)
		{
			xNumbers.push(_random.int(0, 9, xNumbers));
			add(_pickup[xNumbers[i]]);
		}
		
		// Create the player 
		_player = new Player();
		add(_player);

		// Basic level structure
		_level = new FlxTilemap();
		_level.loadMapFromCSV(FlxStringUtil.bitmapToCSV(Assets.getBitmapData("assets/images/map.png"), false, 4), "assets/images/tiles.png", 8, 8, ALT);
		_level.follow();
		add(_level);
		
		// A text to display the score
		_scoreText = new FlxText(10, 10, FlxG.width, "Number of Crates: " + _score);
		_scoreText.setFormat("assets/fonts/Oswald-Regular.ttf", 16, FlxColor.WHITE, LEFT, OUTLINE);
		add(_scoreText);

		_livesText = new FlxText(300, 10, FlxG.width, "Lives: " + _player.getLives());
		_livesText.setFormat("assets/fonts/Oswald-Regular.ttf", 16, FlxColor.WHITE, LEFT, OUTLINE);
		add(_livesText);

		_popupText = new FlxText(0, 0, FlxG.width, "");
		add(_popupText);

		_enemy = new Array<Enemy>();

		// Section for generating Urchin position
		for (i in 0...40)
		{
			_enemy.push(new Enemy(_random.int(32, 596), _random.int(96, 436)));
			add(_enemy[i]);
		}


		for (i in 0...40)
		{
			_debris.push(new Debris(_random.int(32, 596), _random.int(96, 436)));
			add(_debris[i]);
		}
	}
	
	override public function update(elapsed:Float):Void
	{
		// Basic Level collision
		FlxG.collide(_player, _level);
		
		// Checking pickup collision
		for (i in 0..._pickup.length)
		{
			if (xNumbers.indexOf(i, 0) > -1)
			{
				if (_pickup[i].isCollided(_player))
				{
					_popupText.x = _player.x;
					_popupText.y = _player.y;
					_pickup[i].destroy();
					xNumbers.remove(i);
					_score += 1;
					_popupText.text = _score + " / " + _crateTotal;
				}
			}	
		}
		for (i in 0..._debris.length)
		{
			FlxG.collide(_player, _debris[i]);
			FlxG.collide(_level, _debris[i]);
			_debris[i].destroyEnemy(_enemy[i]);
		}
		// checks to see if the player is attack by the enemy

		for (i in 0..._enemy.length)
		{
			_enemy[i].attack(_player);
		}

		// Escape to the menu
		if (FlxG.keys.pressed.ESCAPE)
		{
			FlxG.switchState(new MenuState());
		}
		
		_scoreText.text = ("Number of Crates: " + _score);

		_livesText.text = ("Lives: " + _player.getLives());

		if (_score == _crateTotal)
		{
			FlxG.switchState(new WinState());
		}

		if (_player.getLives() == 0)
		{
			FlxG.switchState(new LoseState());
		}


		super.update(elapsed);
	}
}