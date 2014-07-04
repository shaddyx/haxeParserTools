<?
    $strToFind = "CURLINFO";
    
    $consts = get_defined_constants();
    $first = "";
    $second = "";
    
    foreach ($consts as $k=>$v) {
    	if (strstr($k, $strToFind)){
		$opt = str_replace($strToFind."_", '', $k);
    		$first .= "\t"."public static var $opt:Int;\n";
    		$second .= "\t\t"."$opt = untyped __php__ (\"$k\");\n";
    	}
    }
    
    
    print $first."\n";
    print "\n-------------------------\n";
    print $second."\n";
    
