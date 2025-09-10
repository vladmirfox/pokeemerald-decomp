TestAreaPTInterior_MapScripts::
# 8 "data/maps/TestAreaPTInterior/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TestAreaPTInterior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TestAreaPTInterior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/TestAreaPTInterior/scripts.pory"
	map_script_2 VAR_PT_STATE, 0, PTInterior_EventScript_StartPT
	.2byte 0


PTInterior_MapScript_OnFrame::
# 28 "data/maps/TestAreaPTInterior/scripts.pory"
	compare VAR_SAFARI_ZONE_STATE, 1
	goto_if_eq PTInterior_MapScript_OnFrame_1
# 31 "data/maps/TestAreaPTInterior/scripts.pory"
	compare VAR_PT_STATE, 3
	goto_if_eq PTInterior_MapScript_OnFrame_2
# 34 "data/maps/TestAreaPTInterior/scripts.pory"
	compare VAR_PT_STATE, 4
	goto_if_eq PTInterior_MapScript_OnFrame_3
	return

PTInterior_MapScript_OnFrame_1:
# 29 "data/maps/TestAreaPTInterior/scripts.pory"
	goto PTInterior_EventScript_ExitPT
	return

PTInterior_MapScript_OnFrame_2:
# 32 "data/maps/TestAreaPTInterior/scripts.pory"
	goto PTInterior_EventScript_CheckDone
	return

PTInterior_MapScript_OnFrame_3:
# 35 "data/maps/TestAreaPTInterior/scripts.pory"
	goto PTInterior_EventScript_EndPT
	return


PTInterior_EventScript_ExitPT::
# 43 "data/maps/TestAreaPTInterior/scripts.pory"
	lockall
# 44 "data/maps/TestAreaPTInterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PTInterior_Movement_ExitPT
# 45 "data/maps/TestAreaPTInterior/scripts.pory"
	waitmovement 0
# 46 "data/maps/TestAreaPTInterior/scripts.pory"
	releaseall
	return


PTInterior_EventScript_DoPT::
# 50 "data/maps/TestAreaPTInterior/scripts.pory"
	compare VAR_PT_STATE, 0
	goto_if_eq PTInterior_EventScript_DoPT_2
# 54 "data/maps/TestAreaPTInterior/scripts.pory"
	compare VAR_PT_STATE, 1
	goto_if_eq PTInterior_EventScript_DoPT_3
# 58 "data/maps/TestAreaPTInterior/scripts.pory"
	compare VAR_PT_STATE, 2
	goto_if_eq PTInterior_EventScript_DoPT_4
# 62 "data/maps/TestAreaPTInterior/scripts.pory"
	compare VAR_PT_STATE, 3
	goto_if_eq PTInterior_EventScript_DoPT_5
# 66 "data/maps/TestAreaPTInterior/scripts.pory"
	compare VAR_PT_STATE, 4
	goto_if_eq PTInterior_EventScript_DoPT_6
PTInterior_EventScript_DoPT_1:
	end

PTInterior_EventScript_DoPT_2:
# 52 "data/maps/TestAreaPTInterior/scripts.pory"
	goto PTInterior_EventScript_StartPT
	goto PTInterior_EventScript_DoPT_1

PTInterior_EventScript_DoPT_3:
# 56 "data/maps/TestAreaPTInterior/scripts.pory"
	goto PTInterior_EventScript_DuringPT1
	goto PTInterior_EventScript_DoPT_1

PTInterior_EventScript_DoPT_4:
# 60 "data/maps/TestAreaPTInterior/scripts.pory"
	goto PTInterior_EventScript_DuringPT2
	goto PTInterior_EventScript_DoPT_1

PTInterior_EventScript_DoPT_5:
# 64 "data/maps/TestAreaPTInterior/scripts.pory"
	goto PTInterior_EventScript_CheckDone
	goto PTInterior_EventScript_DoPT_1

PTInterior_EventScript_DoPT_6:
# 68 "data/maps/TestAreaPTInterior/scripts.pory"
	goto PTInterior_EventScript_EndPT
	goto PTInterior_EventScript_DoPT_1


PTInterior_EventScript_StartPT::
# 74 "data/maps/TestAreaPTInterior/scripts.pory"
	lockall
# 75 "data/maps/TestAreaPTInterior/scripts.pory"
	msgbox PTInterior_Text_ElderLiGreetings, MSGBOX_DEFAULT
# 76 "data/maps/TestAreaPTInterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PTInterior_Movement_DuringPTMoveUp
# 77 "data/maps/TestAreaPTInterior/scripts.pory"
	waitmovement 0
# 78 "data/maps/TestAreaPTInterior/scripts.pory"
	setvar VAR_PT_STATE, 1
# 79 "data/maps/TestAreaPTInterior/scripts.pory"
	releaseall
	end


PTInterior_EventScript_DuringPT1::
# 84 "data/maps/TestAreaPTInterior/scripts.pory"
	lockall
# 85 "data/maps/TestAreaPTInterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PTInterior_Movement_DuringPTStop
# 86 "data/maps/TestAreaPTInterior/scripts.pory"
	waitmovement 0
# 87 "data/maps/TestAreaPTInterior/scripts.pory"
	releaseall
	end


PTInterior_EventScript_GotStarter::
# 92 "data/maps/TestAreaPTInterior/scripts.pory"
	lockall
# 93 "data/maps/TestAreaPTInterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PTInterior_Movement_GotStarter
# 94 "data/maps/TestAreaPTInterior/scripts.pory"
	waitmovement 0
# 95 "data/maps/TestAreaPTInterior/scripts.pory"
	releaseall
	end


PTInterior_EventScript_DuringPT2::
# 100 "data/maps/TestAreaPTInterior/scripts.pory"
	lockall
# 101 "data/maps/TestAreaPTInterior/scripts.pory"
	msgbox PTInterior_Text_ElderLiAreReady, MSGBOX_YESNO
# 102 "data/maps/TestAreaPTInterior/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PTInterior_EventScript_DuringPT2_2
# 105 "data/maps/TestAreaPTInterior/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PTInterior_EventScript_DuringPT2_3
PTInterior_EventScript_DuringPT2_1:
# 108 "data/maps/TestAreaPTInterior/scripts.pory"
	releaseall
	end

PTInterior_EventScript_DuringPT2_2:
# 103 "data/maps/TestAreaPTInterior/scripts.pory"
	goto PTInterior_EventScript_GoToPT
	goto PTInterior_EventScript_DuringPT2_1

PTInterior_EventScript_DuringPT2_3:
# 106 "data/maps/TestAreaPTInterior/scripts.pory"
	goto PTInterior_EventScript_RejectPT
	goto PTInterior_EventScript_DuringPT2_1


PTInterior_EventScript_GoToPT::
# 113 "data/maps/TestAreaPTInterior/scripts.pory"
	lockall
# 114 "data/maps/TestAreaPTInterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PTInterior_Movement_DuringPTMoveUp
# 115 "data/maps/TestAreaPTInterior/scripts.pory"
	releaseall
# 116 "data/maps/TestAreaPTInterior/scripts.pory"
	special EnterSafariMode
# 117 "data/maps/TestAreaPTInterior/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 0
# 118 "data/maps/TestAreaPTInterior/scripts.pory"
	setvar VAR_PT_STATE, 3
# 119 "data/maps/TestAreaPTInterior/scripts.pory"
	warp MAP_TEST_AREA_PTA1, 15, 1
# 120 "data/maps/TestAreaPTInterior/scripts.pory"
	waitstate
	end


PTInterior_EventScript_CheckDone::
# 125 "data/maps/TestAreaPTInterior/scripts.pory"
	goto_if_set FLAG_SYS_STARTER_GET, PTInterior_EventScript_CheckDone_1
	return

PTInterior_EventScript_CheckDone_1:
# 126 "data/maps/TestAreaPTInterior/scripts.pory"
	setvar VAR_PT_STATE, 4
# 127 "data/maps/TestAreaPTInterior/scripts.pory"
	goto PTInterior_EventScript_EndPT
	return


PTInterior_EventScript_RejectPT::
# 135 "data/maps/TestAreaPTInterior/scripts.pory"
	lockall
# 136 "data/maps/TestAreaPTInterior/scripts.pory"
	msgbox PTInterior_Text_ElderLiTooBad, MSGBOX_DEFAULT
# 137 "data/maps/TestAreaPTInterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PTInterior_Movement_DuringPTReject
# 138 "data/maps/TestAreaPTInterior/scripts.pory"
	waitmovement 0
# 139 "data/maps/TestAreaPTInterior/scripts.pory"
	releaseall
	end


PTInterior_EventScript_EndPT::
# 144 "data/maps/TestAreaPTInterior/scripts.pory"
	lockall
# 145 "data/maps/TestAreaPTInterior/scripts.pory"
	applymovement 1, PTInterior_Movement_ElderLi
# 146 "data/maps/TestAreaPTInterior/scripts.pory"
	waitmovement 1
# 147 "data/maps/TestAreaPTInterior/scripts.pory"
	msgbox PTInterior_Text_ElderLiCongrats, MSGBOX_DEFAULT
# 148 "data/maps/TestAreaPTInterior/scripts.pory"
	applymovement 1, PTInterior_Movement_Congrats
# 149 "data/maps/TestAreaPTInterior/scripts.pory"
	waitmovement 1
# 150 "data/maps/TestAreaPTInterior/scripts.pory"
	releaseall
	end


PTInterior_EventScript_EnterPT::
# 155 "data/maps/TestAreaPTInterior/scripts.pory"
	special EnterSafariMode
# 156 "data/maps/TestAreaPTInterior/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 0
# 157 "data/maps/TestAreaPTInterior/scripts.pory"
	warp MAP_TEST_AREA_PTA1, 15, 1
# 158 "data/maps/TestAreaPTInterior/scripts.pory"
	waitstate
	end


PTinterior_EventScript_ElderLi::
# 163 "data/maps/TestAreaPTInterior/scripts.pory"
	goto_if_set FLAG_SYS_STARTER_GET, PTinterior_EventScript_ElderLi_6
PTinterior_EventScript_ElderLi_5:
# 170 "data/maps/TestAreaPTInterior/scripts.pory"
	goto_if_set FLAG_SYS_STARTER_GET, PTinterior_EventScript_ElderLi_2
# 183 "data/maps/TestAreaPTInterior/scripts.pory"
	goto_if_unset FLAG_SYS_STARTER_GET, PTinterior_EventScript_ElderLi_3
	return

PTinterior_EventScript_ElderLi_1:
# 164 "data/maps/TestAreaPTInterior/scripts.pory"
	lockall
# 165 "data/maps/TestAreaPTInterior/scripts.pory"
	applymovement 1, PTInterior_Movement_ElderLi
# 166 "data/maps/TestAreaPTInterior/scripts.pory"
	waitmovement 1
# 167 "data/maps/TestAreaPTInterior/scripts.pory"
	msgbox PTInterior_Text_ElderLiCongrats, MSGBOX_DEFAULT
# 168 "data/maps/TestAreaPTInterior/scripts.pory"
	releaseall
	end

PTinterior_EventScript_ElderLi_2:
# 171 "data/maps/TestAreaPTInterior/scripts.pory"
	lockall
# 172 "data/maps/TestAreaPTInterior/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 173 "data/maps/TestAreaPTInterior/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 174 "data/maps/TestAreaPTInterior/scripts.pory"
	applymovement 1, PTInterior_Movement_ElderLi
# 175 "data/maps/TestAreaPTInterior/scripts.pory"
	waitmovement 1
# 176 "data/maps/TestAreaPTInterior/scripts.pory"
	msgbox PTInterior_Text_ElderLiCongrats, MSGBOX_DEFAULT
# 177 "data/maps/TestAreaPTInterior/scripts.pory"
	applymovement 1, PTInterior_Movement_Congrats
# 178 "data/maps/TestAreaPTInterior/scripts.pory"
	waitmovement 1
# 179 "data/maps/TestAreaPTInterior/scripts.pory"
	setrespawn HEAL_LOCATION_TEST_AREA
# 180 "data/maps/TestAreaPTInterior/scripts.pory"
	setflag FLAG_START_KIT
# 181 "data/maps/TestAreaPTInterior/scripts.pory"
	releaseall
	end

PTinterior_EventScript_ElderLi_3:
# 184 "data/maps/TestAreaPTInterior/scripts.pory"
	setvar VAR_PT_STATE, 4
# 185 "data/maps/TestAreaPTInterior/scripts.pory"
	goto PTInterior_EventScript_DuringPT2
	return

PTinterior_EventScript_ElderLi_6:
# 163 "data/maps/TestAreaPTInterior/scripts.pory"
	goto_if_set FLAG_START_KIT, PTinterior_EventScript_ElderLi_1
	goto PTinterior_EventScript_ElderLi_5


# 205 "data/maps/TestAreaPTInterior/scripts.pory"
PTInterior_Movement_ElderLi:
# 206 "data/maps/TestAreaPTInterior/scripts.pory"
	face_player
	step_end

# 209 "data/maps/TestAreaPTInterior/scripts.pory"
PTInterior_Movement_Congrats:
# 210 "data/maps/TestAreaPTInterior/scripts.pory"
	face_down
# 211 "data/maps/TestAreaPTInterior/scripts.pory"
	walk_down
# 212 "data/maps/TestAreaPTInterior/scripts.pory"
	face_right
# 213 "data/maps/TestAreaPTInterior/scripts.pory"
	walk_right
# 214 "data/maps/TestAreaPTInterior/scripts.pory"
	face_down
	step_end

# 217 "data/maps/TestAreaPTInterior/scripts.pory"
PTInterior_Movement_ExitPT:
# 218 "data/maps/TestAreaPTInterior/scripts.pory"
	face_down
	step_end

# 221 "data/maps/TestAreaPTInterior/scripts.pory"
PTInterior_Movement_DuringPTMoveUp:
# 222 "data/maps/TestAreaPTInterior/scripts.pory"
	face_up
# 223 "data/maps/TestAreaPTInterior/scripts.pory"
	walk_up
# 224 "data/maps/TestAreaPTInterior/scripts.pory"
	walk_up
	step_end

# 227 "data/maps/TestAreaPTInterior/scripts.pory"
PTInterior_Movement_DuringPTStop:
# 228 "data/maps/TestAreaPTInterior/scripts.pory"
	face_up
# 229 "data/maps/TestAreaPTInterior/scripts.pory"
	walk_up
# 230 "data/maps/TestAreaPTInterior/scripts.pory"
	walk_up
	step_end

# 233 "data/maps/TestAreaPTInterior/scripts.pory"
PTInterior_Movement_GotStarter:
# 234 "data/maps/TestAreaPTInterior/scripts.pory"
	face_down
# 235 "data/maps/TestAreaPTInterior/scripts.pory"
	walk_down
# 236 "data/maps/TestAreaPTInterior/scripts.pory"
	walk_down
	step_end

# 239 "data/maps/TestAreaPTInterior/scripts.pory"
PTInterior_Movement_DuringPTReject:
# 240 "data/maps/TestAreaPTInterior/scripts.pory"
	face_down
# 241 "data/maps/TestAreaPTInterior/scripts.pory"
	walk_down
	step_end

PTInterior_Text_ElderLiGreetings::
# 189 "data/maps/TestAreaPTInterior/scripts.pory"
	.string "Welcome Aspirants!\n"
	.string "Today you shall take part in the\l"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Proving Trial{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} whereupon you will be\l"
	.string "given the basic tools of a Trainer.\p"
	.string "Balls, Rod and Shoes shall be provided\n"
	.string "BUT only those of you who prove capable\l"
	.string "of Passing the Trial shall be deemed\l"
	.string "Worthy of a Pokedex.$"

PTInterior_Text_ElderLiAreReady::
# 193 "data/maps/TestAreaPTInterior/scripts.pory"
	.string "Are you ready for your Trial?$"

PTInterior_Text_ElderLiTooBad::
# 197 "data/maps/TestAreaPTInterior/scripts.pory"
	.string "What!? How dare you refuse this Honor!$"

PTInterior_Text_ElderLiCongrats::
# 201 "data/maps/TestAreaPTInterior/scripts.pory"
	.string "Well done! {PLAYER} you have\n"
	.string "brought back a Starter!$"
