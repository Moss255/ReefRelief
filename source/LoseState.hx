package;

import flixel.FlxG;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import openfl.system.System;

class LoseState extends FlxState
{
    override public function create()
    {
        super.create();

        var t:FlxText;
		t = new FlxText(0, FlxG.height / 2 - 20, FlxG.width, "Your ship has been damage beyond repair :(");
		t.setFormat("assets/fonts/Oswald-Regular.ttf", 42, FlxColor.WHITE, CENTER, OUTLINE);
		add(t);

        t = new FlxText(0, FlxG.height / 2 + 120, FlxG.width, "Press 'Space' to restart");
        t.setFormat("assets/fonts/Oswald-Regular.ttf", 16, FlxColor.WHITE, CENTER, OUTLINE);
        add(t);
    }

    override public function update(elapsed:Float)
    {

        if (FlxG.keys.pressed.ESCAPE)
        {
            openfl.system.System.exit(0);
        }
        else if(FlxG.keys.pressed.SPACE)
        {
            FlxG.switchState(new MenuState());
        }
      

        super.update(elapsed);
    }
}