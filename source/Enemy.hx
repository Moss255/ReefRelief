package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.tile.FlxTilemap;
import flixel.FlxObject;

class Enemy extends FlxSprite
{
	private var _player:Player;

	public function new(X:Float, Y:Float)
	{
		super(X, Y);
		
		loadGraphic("assets/images/Urchin.png");
		
		width *= 0.75;
		height *= 0.75;

	}

	

	public function attack(_player:Player):Void
	{
		if (FlxG.collide(_player, this))
		{
				_player.setLives(1);
				_player.x =  330;
				_player.y = 60;
				this.destroy();
		}
	}
	
	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
	}
}