package;

import flixel.FlxSprite;
import flixel.FlxG;
import flixel.FlxObject;

class Debris extends FlxSprite
{
    public function new(X:Float, Y:Float)
    {
        super(X, Y);

        width = 16;
        height = 16;

        loadGraphic("assets/images/Seaweed.png", false, 16, 16);
    }


    public function destroyEnemy(_enemy:Enemy)
    {
        if (FlxG.overlap(this, _enemy))
        {
            _enemy.destroy();
            this.destroy();
        }
    }
}