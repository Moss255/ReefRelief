package;

import flixel.FlxG;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.util.FlxColor;


class MenuState extends FlxState
{

	override public function create():Void 
	{
		FlxG.state.bgColor = 0xFF081A59;

		FlxG.mouse.visible = false;


		var t:FlxText;
		t = new FlxText(0, FlxG.height / 2 - 20, FlxG.width, "Reef Relief");
		t.setFormat("assets/fonts/Oswald-Regular.ttf", 42, FlxColor.WHITE, CENTER, OUTLINE);
		add(t);

		t = new FlxText(0, FlxG.height - 60, FlxG.width, "Use Arrow Keys to move and collect the barrells");
		t.setFormat("assets/fonts/Oswald-Regular.ttf", 16, FlxColor.WHITE, CENTER, OUTLINE);
		add(t);

		t = new FlxText(0, FlxG.height - 30, FlxG.width, "space to play");
		t.setFormat("assets/fonts/Oswald-Regular.ttf", 16, FlxColor.WHITE, CENTER, OUTLINE);
		add(t);
	}
	
	override public function update(elapsed:Float):Void 
	{
		if (FlxG.keys.pressed.SPACE)
		{
			FlxG.switchState(new SplashState());
		}
	}
}