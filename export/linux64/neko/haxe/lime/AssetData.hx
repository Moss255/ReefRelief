package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/images/Urchin.png", "assets/images/Urchin.png");
			type.set ("assets/images/Urchin.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/map.png", "assets/images/map.png");
			type.set ("assets/images/map.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/tiles.png", "assets/images/tiles.png");
			type.set ("assets/images/tiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Seaweed.psd", "assets/images/Seaweed.psd");
			type.set ("assets/images/Seaweed.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/Seaweed.png", "assets/images/Seaweed.png");
			type.set ("assets/images/Seaweed.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/sub.png", "assets/images/sub.png");
			type.set ("assets/images/sub.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/barrell.png", "assets/images/barrell.png");
			type.set ("assets/images/barrell.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/map.csv", "assets/map.csv");
			type.set ("assets/map.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/fonts/Oswald-Regular.eot", "assets/fonts/Oswald-Regular.eot");
			type.set ("assets/fonts/Oswald-Regular.eot", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/fonts/Oswald-Regular.svg", "assets/fonts/Oswald-Regular.svg");
			type.set ("assets/fonts/Oswald-Regular.svg", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/fonts/Oswald-Regular.woff", "assets/fonts/Oswald-Regular.woff");
			type.set ("assets/fonts/Oswald-Regular.woff", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/fonts/Oswald-Regular.ttf", "assets/fonts/Oswald-Regular.ttf");
			type.set ("assets/fonts/Oswald-Regular.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/sounds/beep.ogg", "flixel/sounds/beep.ogg");
			type.set ("flixel/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/sounds/flixel.ogg", "flixel/sounds/flixel.ogg");
			type.set ("flixel/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/fonts/nokiafc22.ttf", "flixel/fonts/nokiafc22.ttf");
			type.set ("flixel/fonts/nokiafc22.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/fonts/monsterrat.ttf", "flixel/fonts/monsterrat.ttf");
			type.set ("flixel/fonts/monsterrat.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/images/ui/button.png", "flixel/images/ui/button.png");
			type.set ("flixel/images/ui/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/images/logo/default.png", "flixel/images/logo/default.png");
			type.set ("flixel/images/logo/default.png", Reflect.field (AssetType, "image".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
