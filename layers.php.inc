<?php
    
function getLayers() {
	$Layers = Array(
		"Mapnik" => Array(
			"tiles"=>"http://tile.openstreetmap.org/",
			"description"=>"Roadmap rendering from OpenStreetMap.",
			"update"=>"Weekly",
			"license"=>"CC-BY-SA 2.0",
			"source"=>"OpenStreetMap",
			"hosted"=>"OpenStreetMap foundation",
			"format"=>"png",
			"slippy"=>"http://openstreetmap.org/"
		),
			"OpenCycleMap" => Array(
			"tiles" => "http://tile.opencyclemap.org/cycle",
			"description"=>"A bicycle-themed map.",
			"update"=>"",
			"license"=>"CC-BY-SA 2.0",
			"source"=>"OpenStreetMap",
			"hosted"=>"thunderflames.org",
			"format"=>"png",
			"slippy"=>"http://www.opencyclemap.org/"
		),
		"Transport" => Array(
			"tiles" => "http://tile2.opencyclemap.org/transport",
			"description"=>"Public transport information.",
			"update"=>"",
			"license"=>"CC-BY-SA 2.0",
			"source"=>"OpenStreetMap",
			"hosted"=>"thunderforest.com",
			"format"=>"png",
			"slippy"=>"http://www.opencyclemap.org/"
		),
		"Outdoors" => Array(
			"tiles" => "http://tile.opencyclemap.org/outdoors",
			"description"=>"Aimed at the outdoors enthusiasts.",
			"update"=>"",
			"license"=>"CC-BY-SA 2.0",
			"source"=>"OpenStreetMap",
			"hosted"=>"thunderforest.com",
			"format"=>"png",
			"slippy"=>"http://www.opencyclemap.org/"
		), 
		"Landscape" => Array(
			"tiles" => "http://tile3.opencyclemap.org/landscape",
			"description"=>"The world is full of interesting features beyond roads and houses.",
			"update"=>"",
			"license"=>"CC-BY-SA 2.0",
			"source"=>"OpenStreetMap",
			"hosted"=>"thunderforest.com",
			"format"=>"png",
			"slippy"=>"http://www.opencyclemap.org/"
		), 
		"MapQuest" => Array(
			"tiles" => "http://otile1.mqcdn.com/tiles/1.0.0/osm",
			"description"=>"Remember to cite MapQuest when citing the image source.",
			"update"=>"",
			"license"=>"CC-BY-SA 2.0",
			"source"=>"OpenStreetMap",
			"hosted"=>"MapQuest",
			"format"=>"jpeg",
			"slippy"=>"http://open.mapquest.co.uk/"
		),
	);

	# Optionally include Cloudmade tiles.
	# This requires an API key and probably some sort of usage agreement.
	if(1) {
		foreach(array(1, 2, 5, 998, 999) as $CloudmadeStyleNum) {
			$Layers[sprintf("Cloudmade %d", $CloudmadeStyleNum)] = Array(
			"tiles" => sprintf("http://tile.cloudmade.com/8460df1eb000505e92f1e907e4b426e6/%d/256", $CloudmadeStyleNum),
			"description"=>sprintf("Style %d on Cloudmade's style-editor", $CloudmadeStyleNum),
			"update"=>"",
			"license"=>"CC-BY-SA 2.0",
			"source"=>"CloudMade",
			"format"=>"png",
			"hosted" =>"cloudmade",
			"slippy"=>"http://maps.cloudmade.com/"
			);
		}
	}

	return($Layers);
}
