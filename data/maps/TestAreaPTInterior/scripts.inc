TestAreaPTInterior_MapScripts::
# 2 "data/maps/TestAreaPTInterior/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PTInterior_MapScript_OnLoad
# 3 "data/maps/TestAreaPTInterior/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PTInterior_MapScript_OnFrame
	.byte 0


PTInterior_MapScript_OnLoad::
# 7 "data/maps/TestAreaPTInterior/scripts.pory"
	compare VAR_PT_STATE, 0
	goto_if_eq PTInterior_MapScript_OnLoad_1
	return

PTInterior_MapScript_OnLoad_1:
# 8 "data/maps/TestAreaPTInterior/scripts.pory"
	goto PTInterior_EventScript_DoPT
	return


PTInterior_MapScript_OnFrame::
# 13 "data/maps/TestAreaPTInterior/scripts.pory"
	compare VAR_SAFARI_ZONE_STATE, 1
	goto_if_eq PTInterior_MapScript_OnFrame_1
	return

PTInterior_MapScript_OnFrame_1:
# 14 "data/maps/TestAreaPTInterior/scripts.pory"
	goto PTInterior_EventScript_ExitPT
	return


PTInterior_EventScript_ExitPT::
# 19 "data/maps/TestAreaPTInterior/scripts.pory"
	lockall
# 20 "data/maps/TestAreaPTInterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PTInterior_Movement_ExitPT
# 21 "data/maps/TestAreaPTInterior/scripts.pory"
	waitmovement 0
# 22 "data/maps/TestAreaPTInterior/scripts.pory"
	releaseall
	return


PTInterior_EventScript_DoPT::
# 26 "data/maps/TestAreaPTInterior/scripts.pory"
	compare VAR_PT_STATE, 0
	goto_if_eq PTInterior_EventScript_DoPT_2
# 30 "data/maps/TestAreaPTInterior/scripts.pory"
	compare VAR_PT_STATE, 1
	goto_if_eq PTInterior_EventScript_DoPT_3
# 34 "data/maps/TestAreaPTInterior/scripts.pory"
	compare VAR_PT_STATE, 2
	goto_if_eq PTInterior_EventScript_DoPT_4
# 38 "data/maps/TestAreaPTInterior/scripts.pory"
	compare VAR_PT_STATE, 3
	goto_if_eq PTInterior_EventScript_DoPT_5
# 42 "data/maps/TestAreaPTInterior/scripts.pory"
	compare VAR_PT_STATE, 4
	goto_if_eq PTInterior_EventScript_DoPT_6
PTInterior_EventScript_DoPT_1:
	end

PTInterior_EventScript_DoPT_2:
# 28 "data/maps/TestAreaPTInterior/scripts.pory"
	goto PTInterior_EventScript_StartPT
	goto PTInterior_EventScript_DoPT_1

PTInterior_EventScript_DoPT_3:
# 32 "data/maps/TestAreaPTInterior/scripts.pory"
	goto PTInterior_EventScript_DuringPT1
	goto PTInterior_EventScript_DoPT_1

PTInterior_EventScript_DoPT_4:
# 36 "data/maps/TestAreaPTInterior/scripts.pory"
	goto PTInterior_EventScript_DuringPT2
	goto PTInterior_EventScript_DoPT_1

PTInterior_EventScript_DoPT_5:
# 40 "data/maps/TestAreaPTInterior/scripts.pory"
	goto PTInterior_EventScript_GoToPT
	goto PTInterior_EventScript_DoPT_1

PTInterior_EventScript_DoPT_6:
# 44 "data/maps/TestAreaPTInterior/scripts.pory"
	goto PTInterior_EventScript_EndPT
	goto PTInterior_EventScript_DoPT_1


PTInterior_EventScript_StartPT::
# 50 "data/maps/TestAreaPTInterior/scripts.pory"
	lockall
# 51 "data/maps/TestAreaPTInterior/scripts.pory"
	msgbox PTInterior_Text_ElderLiGreetings, MSGBOX_DEFAULT
# 52 "data/maps/TestAreaPTInterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PTInterior_Movement_DuringPTMoveUp
# 53 "data/maps/TestAreaPTInterior/scripts.pory"
	waitmovement 0
# 54 "data/maps/TestAreaPTInterior/scripts.pory"
	setvar VAR_PT_STATE, 2
# 55 "data/maps/TestAreaPTInterior/scripts.pory"
	releaseall
	end


PTInterior_EventScript_DuringPT1::
# 60 "data/maps/TestAreaPTInterior/scripts.pory"
	lockall
# 62 "data/maps/TestAreaPTInterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PTInterior_Movement_DuringPTStop
# 63 "data/maps/TestAreaPTInterior/scripts.pory"
	waitmovement 0
# 64 "data/maps/TestAreaPTInterior/scripts.pory"
	releaseall
	end


PTInterior_EventScript_DuringPT2::
# 69 "data/maps/TestAreaPTInterior/scripts.pory"
	lockall
# 70 "data/maps/TestAreaPTInterior/scripts.pory"
	msgbox PTInterior_Text_ElderLiAreReady, MSGBOX_YESNO
# 71 "data/maps/TestAreaPTInterior/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PTInterior_EventScript_DuringPT2_2
# 74 "data/maps/TestAreaPTInterior/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PTInterior_EventScript_DuringPT2_3
PTInterior_EventScript_DuringPT2_1:
# 77 "data/maps/TestAreaPTInterior/scripts.pory"
	releaseall
	end

PTInterior_EventScript_DuringPT2_2:
# 72 "data/maps/TestAreaPTInterior/scripts.pory"
	goto PTInterior_EventScript_GoToPT
	goto PTInterior_EventScript_DuringPT2_1

PTInterior_EventScript_DuringPT2_3:
# 75 "data/maps/TestAreaPTInterior/scripts.pory"
	goto PTInterior_EventScript_RejectPT
	goto PTInterior_EventScript_DuringPT2_1


PTInterior_EventScript_GoToPT::
# 82 "data/maps/TestAreaPTInterior/scripts.pory"
	lockall
# 83 "data/maps/TestAreaPTInterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PTInterior_Movement_DuringPTMoveUp
# 84 "data/maps/TestAreaPTInterior/scripts.pory"
	releaseall
# 85 "data/maps/TestAreaPTInterior/scripts.pory"
	special EnterSafariMode
# 86 "data/maps/TestAreaPTInterior/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 0
# 87 "data/maps/TestAreaPTInterior/scripts.pory"
	warp MAP_TEST_AREA_PTA1, 15, 1
# 88 "data/maps/TestAreaPTInterior/scripts.pory"
	waitstate
	end


PTInterior_EventScript_AcceptPT::
# 93 "data/maps/TestAreaPTInterior/scripts.pory"
	lockall
# 94 "data/maps/TestAreaPTInterior/scripts.pory"
	setvar VAR_PT_STATE, 3
# 95 "data/maps/TestAreaPTInterior/scripts.pory"
	releaseall
	end


PTInterior_EventScript_RejectPT::
# 100 "data/maps/TestAreaPTInterior/scripts.pory"
	lockall
# 101 "data/maps/TestAreaPTInterior/scripts.pory"
	msgbox PTInterior_Text_ElderLiTooBad, MSGBOX_DEFAULT
# 102 "data/maps/TestAreaPTInterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PTInterior_Movement_DuringPTReject
# 103 "data/maps/TestAreaPTInterior/scripts.pory"
	waitmovement 0
# 104 "data/maps/TestAreaPTInterior/scripts.pory"
	releaseall
	end


PTInterior_EventScript_EndPT::
# 109 "data/maps/TestAreaPTInterior/scripts.pory"
	lockall
# 110 "data/maps/TestAreaPTInterior/scripts.pory"
	msgbox PTInterior_Text_ElderLiCongrats, MSGBOX_DEFAULT
# 111 "data/maps/TestAreaPTInterior/scripts.pory"
	releaseall
	end


PTInterior_EventScript_EnterPT::
# 116 "data/maps/TestAreaPTInterior/scripts.pory"
	special EnterSafariMode
# 117 "data/maps/TestAreaPTInterior/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 0
# 118 "data/maps/TestAreaPTInterior/scripts.pory"
	warp MAP_TEST_AREA_PTA1, 15, 1
# 119 "data/maps/TestAreaPTInterior/scripts.pory"
	waitstate
	end


PTinterior_EventScript_ElderLi::
# 124 "data/maps/TestAreaPTInterior/scripts.pory"
	lockall
# 125 "data/maps/TestAreaPTInterior/scripts.pory"
	applymovement 1, PTInterior_Movement_ElderLi
# 126 "data/maps/TestAreaPTInterior/scripts.pory"
	msgbox PTInterior_Text_ElderLiGreetings, MSGBOX_DEFAULT
# 127 "data/maps/TestAreaPTInterior/scripts.pory"
	waitmovement 1
# 128 "data/maps/TestAreaPTInterior/scripts.pory"
	releaseall
	end


# 148 "data/maps/TestAreaPTInterior/scripts.pory"
PTInterior_Movement_ElderLi:
# 149 "data/maps/TestAreaPTInterior/scripts.pory"
	face_player
	step_end

# 152 "data/maps/TestAreaPTInterior/scripts.pory"
PTInterior_Movement_ExitPT:
# 153 "data/maps/TestAreaPTInterior/scripts.pory"
	face_down
	step_end

# 156 "data/maps/TestAreaPTInterior/scripts.pory"
PTInterior_Movement_DuringPTMoveUp:
# 157 "data/maps/TestAreaPTInterior/scripts.pory"
	face_left
	step_end

# 160 "data/maps/TestAreaPTInterior/scripts.pory"
PTInterior_Movement_DuringPTStop:
# 161 "data/maps/TestAreaPTInterior/scripts.pory"
	face_right
	step_end

# 164 "data/maps/TestAreaPTInterior/scripts.pory"
PTInterior_Movement_DuringPTReject:
# 165 "data/maps/TestAreaPTInterior/scripts.pory"
	face_up
	step_end

PTInterior_Text_ElderLiGreetings::
# 132 "data/maps/TestAreaPTInterior/scripts.pory"
	.string "Welcome Aspirants!\n"
	.string "Today you shall take part in the\l"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Proving Trial{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} whereupon you will be\l"
	.string "given the basic tools of a Trainer.\p"
	.string "Balls, Rod and Shoes shall be provided\n"
	.string "BUT only those of you who prove capable\l"
	.string "of Passing the Trial shall be deemed\l"
	.string "Worthy of a Pokedex.$"

PTInterior_Text_ElderLiAreReady::
# 136 "data/maps/TestAreaPTInterior/scripts.pory"
	.string "Are you ready for your Trial?$"

PTInterior_Text_ElderLiTooBad::
# 140 "data/maps/TestAreaPTInterior/scripts.pory"
	.string "What!? How dare you refuse this Honor!$"

PTInterior_Text_ElderLiCongrats::
# 144 "data/maps/TestAreaPTInterior/scripts.pory"
	.string "Well done! {PLAYER} you have\n"
	.string "brought back a Starter!$"
