package;

import flixel.FlxG;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.FlxSprite;

class SplashState extends FlxState
{
    private var _pickup:FlxSprite;

    override public function create()
    {
        _pickup = new Pickup(FlxG.height - 64, FlxG.width);

        var t:FlxText;
        t = new FlxText(0, FlxG.height / 16, FlxG.width, "How to play");
		t.setFormat("assets/fonts/Oswald-Regular.ttf", 32, FlxColor.WHITE, CENTER, OUTLINE);
		add(t);

        var player = new FlxSprite();
        player.loadGraphic("assets/images/sub.png");
        player.x = FlxG.width / 2;
        player.y = 120;
        player.setGraphicSize(64, 64);
        add(player);

        var enemy = new FlxSprite();
        enemy.loadGraphic("assets/images/Urchin.png");
        enemy.x = FlxG.width / 2;
        enemy.y = 280;
        enemy.setGraphicSize(64, 64);
        add(enemy);

        var pickup = new FlxSprite();
        pickup.loadGraphic("assets/images/barrell.png");
        pickup.x = FlxG.width / 2;
        pickup.y = 400;
        pickup.setGraphicSize(64, 64);
        add(pickup);

        t = new FlxText(0, FlxG.height / 3, FlxG.width, "This is your submarine");
        t.setFormat("assets/fonts/Oswald-Regular.ttf", 16, FlxColor.WHITE, CENTER, OUTLINE);
        add(t);

        t = new FlxText(0, FlxG.height / 3 * 2, FlxG.width, "These are the urchins you should avoid");
        t.setFormat("assets/fonts/Oswald-Regular.ttf", 16, FlxColor.WHITE, FlxTextAlign.CENTER, OUTLINE);
        add(t);

         t = new FlxText(0, FlxG.height - 32, FlxG.width, "These are the barrells you should collect");
        t.setFormat("assets/fonts/Oswald-Regular.ttf", 16, FlxColor.WHITE, FlxTextAlign.CENTER, OUTLINE);
        add(t);


    }

    override public function update(elapsed:Float)
    {
        if (FlxG.keys.pressed.SPACE)
        {
            FlxG.switchState(new PlayState());
        }
    }
}