TestAreaPTInterior_MapScripts::
# 3 "data/maps/TestAreaPTInterior/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TestAreaPTInterior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TestAreaPTInterior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/TestAreaPTInterior/scripts.pory"
	map_script_2 VAR_SAFARI_ZONE_STATE, 1, PTInterior_MapScript_OnFrame
# 5 "data/maps/TestAreaPTInterior/scripts.pory"
	map_script_2 VAR_PT_STATE, 0, PTInterior_EventScript_StartPT
# 9 "data/maps/TestAreaPTInterior/scripts.pory"
	map_script_2 VAR_PT_STATE, 4, PTInterior_EventScript_EndPT
	.2byte 0


PTInterior_MapScript_OnFrame::
# 23 "data/maps/TestAreaPTInterior/scripts.pory"
	compare VAR_SAFARI_ZONE_STATE, 1
	goto_if_eq PTInterior_MapScript_OnFrame_1
	return

PTInterior_MapScript_OnFrame_1:
# 24 "data/maps/TestAreaPTInterior/scripts.pory"
	goto PTInterior_EventScript_ExitPT
	return


PTInterior_EventScript_ExitPT::
# 32 "data/maps/TestAreaPTInterior/scripts.pory"
	lockall
# 33 "data/maps/TestAreaPTInterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PTInterior_Movement_ExitPT
# 34 "data/maps/TestAreaPTInterior/scripts.pory"
	waitmovement 0
# 35 "data/maps/TestAreaPTInterior/scripts.pory"
	releaseall
	return


PTInterior_EventScript_DoPT::
# 39 "data/maps/TestAreaPTInterior/scripts.pory"
	compare VAR_PT_STATE, 0
	goto_if_eq PTInterior_EventScript_DoPT_2
# 43 "data/maps/TestAreaPTInterior/scripts.pory"
	compare VAR_PT_STATE, 1
	goto_if_eq PTInterior_EventScript_DoPT_3
# 47 "data/maps/TestAreaPTInterior/scripts.pory"
	compare VAR_PT_STATE, 2
	goto_if_eq PTInterior_EventScript_DoPT_4
# 51 "data/maps/TestAreaPTInterior/scripts.pory"
	compare VAR_PT_STATE, 3
	goto_if_eq PTInterior_EventScript_DoPT_5
# 55 "data/maps/TestAreaPTInterior/scripts.pory"
	compare VAR_PT_STATE, 4
	goto_if_eq PTInterior_EventScript_DoPT_6
PTInterior_EventScript_DoPT_1:
	end

PTInterior_EventScript_DoPT_2:
# 41 "data/maps/TestAreaPTInterior/scripts.pory"
	goto PTInterior_EventScript_StartPT
	goto PTInterior_EventScript_DoPT_1

PTInterior_EventScript_DoPT_3:
# 45 "data/maps/TestAreaPTInterior/scripts.pory"
	goto PTInterior_EventScript_DuringPT1
	goto PTInterior_EventScript_DoPT_1

PTInterior_EventScript_DoPT_4:
# 49 "data/maps/TestAreaPTInterior/scripts.pory"
	goto PTInterior_EventScript_DuringPT2
	goto PTInterior_EventScript_DoPT_1

PTInterior_EventScript_DoPT_5:
# 53 "data/maps/TestAreaPTInterior/scripts.pory"
	goto PTInterior_EventScript_GoToPT
	goto PTInterior_EventScript_DoPT_1

PTInterior_EventScript_DoPT_6:
# 57 "data/maps/TestAreaPTInterior/scripts.pory"
	goto PTInterior_EventScript_EndPT
	goto PTInterior_EventScript_DoPT_1


PTInterior_EventScript_StartPT::
# 63 "data/maps/TestAreaPTInterior/scripts.pory"
	lockall
# 64 "data/maps/TestAreaPTInterior/scripts.pory"
	msgbox PTInterior_Text_ElderLiGreetings, MSGBOX_DEFAULT
# 65 "data/maps/TestAreaPTInterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PTInterior_Movement_DuringPTMoveUp
# 66 "data/maps/TestAreaPTInterior/scripts.pory"
	waitmovement 0
# 67 "data/maps/TestAreaPTInterior/scripts.pory"
	setvar VAR_PT_STATE, 2
# 68 "data/maps/TestAreaPTInterior/scripts.pory"
	releaseall
	end


PTInterior_EventScript_DuringPT1::
# 73 "data/maps/TestAreaPTInterior/scripts.pory"
	lockall
# 75 "data/maps/TestAreaPTInterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PTInterior_Movement_DuringPTStop
# 76 "data/maps/TestAreaPTInterior/scripts.pory"
	waitmovement 0
# 77 "data/maps/TestAreaPTInterior/scripts.pory"
	releaseall
	end


PTInterior_EventScript_DuringPT2::
# 82 "data/maps/TestAreaPTInterior/scripts.pory"
	lockall
# 83 "data/maps/TestAreaPTInterior/scripts.pory"
	msgbox PTInterior_Text_ElderLiAreReady, MSGBOX_YESNO
# 84 "data/maps/TestAreaPTInterior/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PTInterior_EventScript_DuringPT2_2
# 87 "data/maps/TestAreaPTInterior/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PTInterior_EventScript_DuringPT2_3
PTInterior_EventScript_DuringPT2_1:
# 90 "data/maps/TestAreaPTInterior/scripts.pory"
	releaseall
	end

PTInterior_EventScript_DuringPT2_2:
# 85 "data/maps/TestAreaPTInterior/scripts.pory"
	goto PTInterior_EventScript_GoToPT
	goto PTInterior_EventScript_DuringPT2_1

PTInterior_EventScript_DuringPT2_3:
# 88 "data/maps/TestAreaPTInterior/scripts.pory"
	goto PTInterior_EventScript_RejectPT
	goto PTInterior_EventScript_DuringPT2_1


PTInterior_EventScript_GoToPT::
# 95 "data/maps/TestAreaPTInterior/scripts.pory"
	lockall
# 96 "data/maps/TestAreaPTInterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PTInterior_Movement_DuringPTMoveUp
# 97 "data/maps/TestAreaPTInterior/scripts.pory"
	releaseall
# 98 "data/maps/TestAreaPTInterior/scripts.pory"
	special EnterSafariMode
# 99 "data/maps/TestAreaPTInterior/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 0
# 100 "data/maps/TestAreaPTInterior/scripts.pory"
	warp MAP_TEST_AREA_PTA1, 15, 1
# 101 "data/maps/TestAreaPTInterior/scripts.pory"
	waitstate
	end


PTInterior_EventScript_AcceptPT::
# 106 "data/maps/TestAreaPTInterior/scripts.pory"
	lockall
# 107 "data/maps/TestAreaPTInterior/scripts.pory"
	setvar VAR_PT_STATE, 3
# 108 "data/maps/TestAreaPTInterior/scripts.pory"
	releaseall
	end


PTInterior_EventScript_RejectPT::
# 113 "data/maps/TestAreaPTInterior/scripts.pory"
	lockall
# 114 "data/maps/TestAreaPTInterior/scripts.pory"
	msgbox PTInterior_Text_ElderLiTooBad, MSGBOX_DEFAULT
# 115 "data/maps/TestAreaPTInterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PTInterior_Movement_DuringPTReject
# 116 "data/maps/TestAreaPTInterior/scripts.pory"
	waitmovement 0
# 117 "data/maps/TestAreaPTInterior/scripts.pory"
	releaseall
	end


PTInterior_EventScript_EndPT::
# 122 "data/maps/TestAreaPTInterior/scripts.pory"
	lockall
# 123 "data/maps/TestAreaPTInterior/scripts.pory"
	applymovement 1, PTInterior_Movement_ElderLi
# 124 "data/maps/TestAreaPTInterior/scripts.pory"
	waitmovement 1
# 125 "data/maps/TestAreaPTInterior/scripts.pory"
	msgbox PTInterior_Text_ElderLiCongrats, MSGBOX_DEFAULT
# 126 "data/maps/TestAreaPTInterior/scripts.pory"
	applymovement 1, PTInterior_Movement_Congrats
# 127 "data/maps/TestAreaPTInterior/scripts.pory"
	waitmovement 1
# 128 "data/maps/TestAreaPTInterior/scripts.pory"
	releaseall
	end


PTInterior_EventScript_EnterPT::
# 133 "data/maps/TestAreaPTInterior/scripts.pory"
	special EnterSafariMode
# 134 "data/maps/TestAreaPTInterior/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 0
# 135 "data/maps/TestAreaPTInterior/scripts.pory"
	warp MAP_TEST_AREA_PTA1, 15, 1
# 136 "data/maps/TestAreaPTInterior/scripts.pory"
	waitstate
	end


PTinterior_EventScript_ElderLi::
# 141 "data/maps/TestAreaPTInterior/scripts.pory"
	lockall
# 142 "data/maps/TestAreaPTInterior/scripts.pory"
	applymovement 1, PTInterior_Movement_ElderLi
# 143 "data/maps/TestAreaPTInterior/scripts.pory"
	msgbox PTInterior_Text_ElderLiGreetings, MSGBOX_DEFAULT
# 144 "data/maps/TestAreaPTInterior/scripts.pory"
	waitmovement 1
# 145 "data/maps/TestAreaPTInterior/scripts.pory"
	releaseall
	end


# 165 "data/maps/TestAreaPTInterior/scripts.pory"
PTInterior_Movement_ElderLi:
# 166 "data/maps/TestAreaPTInterior/scripts.pory"
	face_player
	step_end

# 169 "data/maps/TestAreaPTInterior/scripts.pory"
PTInterior_Movement_Congrats:
# 170 "data/maps/TestAreaPTInterior/scripts.pory"
	face_down
# 171 "data/maps/TestAreaPTInterior/scripts.pory"
	walk_down
# 172 "data/maps/TestAreaPTInterior/scripts.pory"
	face_right
# 173 "data/maps/TestAreaPTInterior/scripts.pory"
	walk_right
# 174 "data/maps/TestAreaPTInterior/scripts.pory"
	face_down
	step_end

# 177 "data/maps/TestAreaPTInterior/scripts.pory"
PTInterior_Movement_ExitPT:
# 178 "data/maps/TestAreaPTInterior/scripts.pory"
	face_down
	step_end

# 181 "data/maps/TestAreaPTInterior/scripts.pory"
PTInterior_Movement_DuringPTMoveUp:
# 182 "data/maps/TestAreaPTInterior/scripts.pory"
	face_up
# 183 "data/maps/TestAreaPTInterior/scripts.pory"
	walk_up
	step_end

# 186 "data/maps/TestAreaPTInterior/scripts.pory"
PTInterior_Movement_DuringPTStop:
# 187 "data/maps/TestAreaPTInterior/scripts.pory"
	face_up
# 188 "data/maps/TestAreaPTInterior/scripts.pory"
	walk_up
# 189 "data/maps/TestAreaPTInterior/scripts.pory"
	walk_up
	step_end

# 192 "data/maps/TestAreaPTInterior/scripts.pory"
PTInterior_Movement_DuringPTReject:
# 193 "data/maps/TestAreaPTInterior/scripts.pory"
	face_down
# 194 "data/maps/TestAreaPTInterior/scripts.pory"
	walk_down
	step_end

PTInterior_Text_ElderLiGreetings::
# 149 "data/maps/TestAreaPTInterior/scripts.pory"
	.string "Welcome Aspirants!\n"
	.string "Today you shall take part in the\l"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Proving Trial{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} whereupon you will be\l"
	.string "given the basic tools of a Trainer.\p"
	.string "Balls, Rod and Shoes shall be provided\n"
	.string "BUT only those of you who prove capable\l"
	.string "of Passing the Trial shall be deemed\l"
	.string "Worthy of a Pokedex.$"

PTInterior_Text_ElderLiAreReady::
# 153 "data/maps/TestAreaPTInterior/scripts.pory"
	.string "Are you ready for your Trial?$"

PTInterior_Text_ElderLiTooBad::
# 157 "data/maps/TestAreaPTInterior/scripts.pory"
	.string "What!? How dare you refuse this Honor!$"

PTInterior_Text_ElderLiCongrats::
# 161 "data/maps/TestAreaPTInterior/scripts.pory"
	.string "Well done! {PLAYER} you have\n"
	.string "brought back a Starter!$"
