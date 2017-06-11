package;

import flixel.FlxG;
import flixel.FlxSprite;
//import flixel.math.FlxPoint;

class Pickup extends FlxSprite
{

    public function new(X:Float, Y:Float)
    {
        super(X, Y);

        width = 16;
        height = 16;

        loadGraphic("assets/images/barrell.png", false, 16, 16);
    }

    public function isCollided(newPlayer:Player):Bool
    {
        if (FlxG.collide(newPlayer, this))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}