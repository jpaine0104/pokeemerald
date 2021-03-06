Route112_CableCarStation_MapScripts:: @ 822AABE
	map_script 3, Route112_CableCarStation_MapScript1_22AAC9
	map_script 2, Route112_CableCarStation_MapScript2_22AAE9
	.byte 0

Route112_CableCarStation_MapScript1_22AAC9: @ 822AAC9
	setescapewarp MAP_ROUTE112, 255, 28, 28
	compare VAR_0x40A3, 2
	call_if 1, Route112_CableCarStation_EventScript_22AADD
	end

Route112_CableCarStation_EventScript_22AADD:: @ 822AADD
	setobjectxyperm 1, 7, 4
	setobjectmovementtype 1, 9
	return

Route112_CableCarStation_MapScript2_22AAE9: @ 822AAE9
	map_script_2 VAR_0x40A3, 2, Route112_CableCarStation_EventScript_22AAF3
	.2byte 0

Route112_CableCarStation_EventScript_22AAF3:: @ 822AAF3
	lockall
	applymovement 255, Route112_CableCarStation_Movement_22AB80
	applymovement 1, Route112_CableCarStation_Movement_22AB76
	waitmovement 0
	setvar VAR_0x40A3, 0
	setobjectxyperm 1, 6, 7
	setobjectmovementtype 1, 8
	releaseall
	end

Route112_CableCarStation_EventScript_22AB17:: @ 822AB17
	lock
	faceplayer
	msgbox Route112_CableCarStation_Text_22AB85, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_eq Route112_CableCarStation_EventScript_22AB38
	compare VAR_RESULT, 0
	goto_eq Route112_CableCarStation_EventScript_22AB67
	end

Route112_CableCarStation_EventScript_22AB38:: @ 822AB38
	msgbox Route112_CableCarStation_Text_22ABC2, MSGBOX_DEFAULT
	closemessage
	applymovement 1, Route112_CableCarStation_Movement_22AB71
	applymovement 255, Route112_CableCarStation_Movement_22AB7B
	waitmovement 0
	setvar VAR_0x8004, 0
	setvar VAR_0x40A3, 1
	incrementgamestat 48
	special CableCarWarp
	special CableCar
	waitstate
	release
	end

Route112_CableCarStation_EventScript_22AB67:: @ 822AB67
	msgbox Route112_CableCarStation_Text_22ABD8, MSGBOX_DEFAULT
	release
	end

Route112_CableCarStation_Movement_22AB71: @ 822AB71
	walk_up
	walk_up
	walk_right
	walk_in_place_fastest_left
	step_end

Route112_CableCarStation_Movement_22AB76: @ 822AB76
	delay_16
	walk_left
	walk_down
	walk_down
	step_end

Route112_CableCarStation_Movement_22AB7B: @ 822AB7B
	walk_up
	walk_up
	walk_up
	delay_16
	step_end

Route112_CableCarStation_Movement_22AB80: @ 822AB80
	walk_down
	walk_down
	walk_down
	delay_16
	step_end

Route112_CableCarStation_Text_22AB85: @ 822AB85
	.string "The CABLE CAR is ready to go up.\n"
	.string "Would you like to be on it?$"

Route112_CableCarStation_Text_22ABC2: @ 822ABC2
	.string "Please step this way.$"

Route112_CableCarStation_Text_22ABD8: @ 822ABD8
	.string "Please ride with us another time.$"

