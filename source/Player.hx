package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.math.FlxPoint;
import flixel.input.touch.FlxTouch;
import flixel.input.touch.FlxTouchManager;
import flixel.math.FlxVelocity;

class Player extends FlxSprite
{
	private var lives:Int = 5;

	public function new()
	{
		super(Math.floor(FlxG.width / 2 - 8), Math.floor(FlxG.height / 2 - 8));

		antialiasing = true;		
		
		loadGraphic("assets/images/sub.png");
		
		width *= 0.75;
		height *= 0.75;
		x = 330;
		y = 60;
	}

	public function getLives():Int
	{
		return this.lives;
	}

	public function setLives(newLives:Int):Void
	{
		lives -= newLives;
	}

	public function getPos():FlxPoint
	{
		return new FlxPoint(this.x, this.y);
	}
	
	override public function update(elapsed:Float):Void
	{
		angularVelocity = 0;
		var speed:Float = 0;

		if (FlxG.keys.anyPressed([A, LEFT]))
		{
			angularVelocity -= 240;
		}
		
		if (FlxG.keys.anyPressed([D, RIGHT]))
		{
			angularVelocity += 240;
		}
		
		if (FlxG.keys.anyPressed([W, UP]))
		{
			speed += 60;
			velocity.set(speed, 0);
			velocity.rotate(FlxPoint.weak(0, 0), angle);
			
		}

		if (FlxG.keys.anyPressed([S, DOWN]))
		{
			speed = 0;
			velocity.set(speed, 0);
			velocity.rotate(FlxPoint.weak(0, 0), angle);
		}
		
		super.update(elapsed);

		//trace(x);
		//trace(y);
	}
}