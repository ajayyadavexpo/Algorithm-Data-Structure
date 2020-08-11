<?php

// Q : How do you find the missing number in a given integer array of 1 to 8? 
$arr  = [1,2,7,4,6,8,3];



function missing($arr){
	for ($i=1; $i <= 8; $i++) { 
		for($j=1;$j<=8;$j++){
			if($arr[$i] == $arr[$j]){
				break;
			}
		}
	}	
}
