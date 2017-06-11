package;

import flixel.FlxG;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.util.FlxColor;

class WinState extends FlxState
{
    override public function create()
    {
        super.create();

        var t:FlxText;
		t = new FlxText(0, FlxG.height / 2 - 20, FlxG.width, "The Reef is Clear, Thank you");
		t.setFormat("assets/fonts/Oswald-Regular.ttf", 42, FlxColor.WHITE, CENTER, OUTLINE);
		add(t);

        t = new FlxText(0, FlxG.height / 2 + 60, FlxG.width, "Press 'Space' to reset");
        t.setFormat("assets/fonts/Oswald-Regular.ttf", 16, FlxColor.WHITE, CENTER, OUTLINE);
        add(t);
    }

    override public function update(elapsed:Float)
    {
        if (FlxG.keys.pressed.SPACE)
        {
            FlxG.switchState(new MenuState());
        }

        super.update(elapsed);
    }
}