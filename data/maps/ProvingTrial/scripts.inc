ProvingTrial_MapScripts::
# 2 "data/maps/ProvingTrial/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ProvingTrial_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ProvingTrial_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/ProvingTrial/scripts.pory"
	map_script_2 VAR_PT_STATE, 0, ProvingTrial_EventScript_StartPT
	.2byte 0


ProvingTrial_EventScript_StartPT::
# 8 "data/maps/ProvingTrial/scripts.pory"
	lockall
# 9 "data/maps/ProvingTrial/scripts.pory"
	msgbox PTInterior_Text_ElderLiGreetings, MSGBOX_DEFAULT
# 10 "data/maps/ProvingTrial/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PTInterior_Movement_DuringPTMoveUp
# 11 "data/maps/ProvingTrial/scripts.pory"
	waitmovement 0
# 12 "data/maps/ProvingTrial/scripts.pory"
	setvar VAR_PT_STATE, 1
# 13 "data/maps/ProvingTrial/scripts.pory"
	releaseall
	end


ProvingTrial_EventScript_DuringPT2::
# 18 "data/maps/ProvingTrial/scripts.pory"
	lockall
# 19 "data/maps/ProvingTrial/scripts.pory"
	msgbox PTInterior_Text_ElderLiAreReady, MSGBOX_YESNO
# 20 "data/maps/ProvingTrial/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProvingTrial_EventScript_DuringPT2_2
# 23 "data/maps/ProvingTrial/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ProvingTrial_EventScript_DuringPT2_3
ProvingTrial_EventScript_DuringPT2_1:
# 26 "data/maps/ProvingTrial/scripts.pory"
	releaseall
	end

ProvingTrial_EventScript_DuringPT2_2:
# 21 "data/maps/ProvingTrial/scripts.pory"
	goto PTInterior_EventScript_GoToPT
	goto ProvingTrial_EventScript_DuringPT2_1

ProvingTrial_EventScript_DuringPT2_3:
# 24 "data/maps/ProvingTrial/scripts.pory"
	goto PTInterior_EventScript_RejectPT
	goto ProvingTrial_EventScript_DuringPT2_1


ProvingTrial_EventScript_GoToPT::
# 31 "data/maps/ProvingTrial/scripts.pory"
	lockall
# 32 "data/maps/ProvingTrial/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PTInterior_Movement_DuringPTMoveUp
# 33 "data/maps/ProvingTrial/scripts.pory"
	releaseall
# 34 "data/maps/ProvingTrial/scripts.pory"
	special EnterSafariMode
# 35 "data/maps/ProvingTrial/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 0
# 36 "data/maps/ProvingTrial/scripts.pory"
	setvar VAR_PT_STATE, 3
# 37 "data/maps/ProvingTrial/scripts.pory"
	warp MAP_TEST_AREA_PTA1, 15, 1
# 38 "data/maps/ProvingTrial/scripts.pory"
	waitstate
	end


ProvingTrial_EventScript_ElderLi::
# 43 "data/maps/ProvingTrial/scripts.pory"
	goto_if_set FLAG_SYS_STARTER_GET, ProvingTrial_EventScript_ElderLi_10
ProvingTrial_EventScript_ElderLi_8:
# 50 "data/maps/ProvingTrial/scripts.pory"
	goto_if_set FLAG_START_KIT, ProvingTrial_EventScript_ElderLi_7
ProvingTrial_EventScript_ElderLi_6:
# 55 "data/maps/ProvingTrial/scripts.pory"
	goto_if_set FLAG_SYS_STARTER_GET, ProvingTrial_EventScript_ElderLi_3
# 72 "data/maps/ProvingTrial/scripts.pory"
	goto_if_unset FLAG_SYS_STARTER_GET, ProvingTrial_EventScript_ElderLi_4
	return

ProvingTrial_EventScript_ElderLi_1:
# 44 "data/maps/ProvingTrial/scripts.pory"
	lockall
# 45 "data/maps/ProvingTrial/scripts.pory"
	applymovement 1, PTInterior_Movement_ElderLi
# 46 "data/maps/ProvingTrial/scripts.pory"
	waitmovement 1
# 47 "data/maps/ProvingTrial/scripts.pory"
	msgbox PTInterior_Text_ElderLiCongrats, MSGBOX_DEFAULT
# 48 "data/maps/ProvingTrial/scripts.pory"
	releaseall
	end

ProvingTrial_EventScript_ElderLi_2:
# 51 "data/maps/ProvingTrial/scripts.pory"
	lockall
# 52 "data/maps/ProvingTrial/scripts.pory"
	msgbox ProvingTrial_Text_HaveDone, MSGBOX_DEFAULT
# 53 "data/maps/ProvingTrial/scripts.pory"
	releaseall
	end

ProvingTrial_EventScript_ElderLi_3:
# 56 "data/maps/ProvingTrial/scripts.pory"
	lockall
# 57 "data/maps/ProvingTrial/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 58 "data/maps/ProvingTrial/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 59 "data/maps/ProvingTrial/scripts.pory"
	applymovement 1, PTInterior_Movement_ElderLi
# 60 "data/maps/ProvingTrial/scripts.pory"
	waitmovement 1
# 61 "data/maps/ProvingTrial/scripts.pory"
	msgbox PTInterior_Text_ElderLiCongrats, MSGBOX_DEFAULT
# 62 "data/maps/ProvingTrial/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 63 "data/maps/ProvingTrial/scripts.pory"
	giveitem ITEM_POTION, 2
# 64 "data/maps/ProvingTrial/scripts.pory"
	applymovement 1, PTInterior_Movement_Congrats
# 65 "data/maps/ProvingTrial/scripts.pory"
	waitmovement 1
# 66 "data/maps/ProvingTrial/scripts.pory"
	setrespawn HEAL_LOCATION_TEST_AREA
# 67 "data/maps/ProvingTrial/scripts.pory"
	setvar VAR_WYRMSHIRE_STATE, 2
# 68 "data/maps/ProvingTrial/scripts.pory"
	setflag FLAG_START_KIT
# 69 "data/maps/ProvingTrial/scripts.pory"
	releaseall
	end

ProvingTrial_EventScript_ElderLi_4:
# 73 "data/maps/ProvingTrial/scripts.pory"
	setvar VAR_PT_STATE, 4
# 74 "data/maps/ProvingTrial/scripts.pory"
	lockall
# 75 "data/maps/ProvingTrial/scripts.pory"
	msgbox PTInterior_Text_ElderLiAreReady, MSGBOX_YESNO
# 76 "data/maps/ProvingTrial/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProvingTrial_EventScript_ElderLi_14
# 79 "data/maps/ProvingTrial/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ProvingTrial_EventScript_ElderLi_15
ProvingTrial_EventScript_ElderLi_13:
# 82 "data/maps/ProvingTrial/scripts.pory"
	releaseall
	end

ProvingTrial_EventScript_ElderLi_7:
# 50 "data/maps/ProvingTrial/scripts.pory"
	goto_if_set FLAG_PT_REJECT, ProvingTrial_EventScript_ElderLi_2
	goto ProvingTrial_EventScript_ElderLi_6

ProvingTrial_EventScript_ElderLi_10:
# 43 "data/maps/ProvingTrial/scripts.pory"
	goto_if_set FLAG_START_KIT, ProvingTrial_EventScript_ElderLi_1
	goto ProvingTrial_EventScript_ElderLi_8

ProvingTrial_EventScript_ElderLi_14:
# 77 "data/maps/ProvingTrial/scripts.pory"
	goto PTInterior_EventScript_GoToPT
	goto ProvingTrial_EventScript_ElderLi_13

ProvingTrial_EventScript_ElderLi_15:
# 80 "data/maps/ProvingTrial/scripts.pory"
	goto ProvingTrial_EventScript_RejectPT
	goto ProvingTrial_EventScript_ElderLi_13


ProvingTrial_EventScript_RejectPT::
# 88 "data/maps/ProvingTrial/scripts.pory"
	msgbox ProvingTrial_Text_AllHave, MSGBOX_DEFAULT
# 89 "data/maps/ProvingTrial/scripts.pory"
	givemon SPECIES_APPLIN, 3
# 90 "data/maps/ProvingTrial/scripts.pory"
	givemon SPECIES_POLTCHAGEIST, 3
# 91 "data/maps/ProvingTrial/scripts.pory"
	giveitem ITEM_POKE_BALL, 2
# 92 "data/maps/ProvingTrial/scripts.pory"
	giveitem ITEM_POTION, 1
# 93 "data/maps/ProvingTrial/scripts.pory"
	removemoney 2000
# 94 "data/maps/ProvingTrial/scripts.pory"
	setvar VAR_WYRMSHIRE_STATE, 2
# 95 "data/maps/ProvingTrial/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 96 "data/maps/ProvingTrial/scripts.pory"
	setflag FLAG_PT_REJECT
# 97 "data/maps/ProvingTrial/scripts.pory"
	setflag FLAG_START_KIT
# 98 "data/maps/ProvingTrial/scripts.pory"
	releaseall
	end


ProvingTrial_Text_AllHave::
# 102 "data/maps/ProvingTrial/scripts.pory"
	.string "Oh?... In that case I suppose I can give\n"
	.string "you what was to be my lunch and some\l"
	.string "trinkets to begin your Journey with.$"

ProvingTrial_Text_HaveDone::
# 106 "data/maps/ProvingTrial/scripts.pory"
	.string "You have rejected what was offered and\n"
	.string "I have done all I can to aide you.$"
