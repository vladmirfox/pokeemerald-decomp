TestAreaPlayerHomeFloor2_MapScripts::
	.byte 0


DoSleepPrompt::
# 6 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	lock
# 7 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_WYRMSHIRE_STATE, 0
	goto_if_eq DoSleepPrompt_1
# 44 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox DoSleep_Text, MSGBOX_DEFAULT
# 45 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, DoSleepMorning_Text, DoSleepDay_Text, DoSleepEvening_Text, DoSleepNight_Text
# 46 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	gettimeofday
# 47 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq DoSleepPrompt_14
# 53 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DoSleepPrompt_15
# 59 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq DoSleepPrompt_16
# 65 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq DoSleepPrompt_17
DoSleepPrompt_13:
# 71 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	closemessage
# 72 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	release
	end

DoSleepPrompt_1:
# 8 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox DoSleep_Text, MSGBOX_DEFAULT
# 9 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, DoSleepMorning_Text, DoSleepDay_Text, DoSleepEvening_Text, DoSleepNight_Text
# 10 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	gettimeofday
# 11 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq DoSleepPrompt_5
# 18 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DoSleepPrompt_6
# 25 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq DoSleepPrompt_7
# 32 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq DoSleepPrompt_8
DoSleepPrompt_4:
# 39 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	setvar VAR_WYRMSHIRE_STATE, 1
# 40 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	closemessage
# 41 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	release
	end

DoSleepPrompt_5:
# 13 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 14 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	setflag FLAG_AIDE_ASLEEP
# 15 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fwdtime 8, 0
# 16 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto DoSleepPrompt_4

DoSleepPrompt_6:
# 20 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 21 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	setflag FLAG_AIDE_ASLEEP
# 22 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fwdtime 12, 0
# 23 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto DoSleepPrompt_4

DoSleepPrompt_7:
# 27 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 28 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	setflag FLAG_AIDE_ASLEEP
# 29 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fwdtime 20, 0
# 30 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto DoSleepPrompt_4

DoSleepPrompt_8:
# 34 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 35 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	setflag FLAG_AIDE_ASLEEP
# 36 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fwdtime 22, 0
# 37 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto DoSleepPrompt_4

DoSleepPrompt_14:
# 49 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 50 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fwdtime 8, 0
# 51 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto DoSleepPrompt_13

DoSleepPrompt_15:
# 55 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 56 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fwdtime 12, 0
# 57 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto DoSleepPrompt_13

DoSleepPrompt_16:
# 61 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 62 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fwdtime 20, 0
# 63 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto DoSleepPrompt_13

DoSleepPrompt_17:
# 67 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 68 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fwdtime 22, 0
# 69 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto DoSleepPrompt_13


ClansLoreBook::
# 98 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	lock
# 99 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox BookPrompt_Text, MSGBOX_DEFAULT
# 100 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, Insca_Text, Umbrum_Text, Wylkera_Text, Sprkwick_Text, Faesken_Text, Valknight_Text, Emburn_Text, Aeravis_Text, Mortus_Text, Gardia_Text, acTera_Text, Icisica_Text, Mansons_Text, Viadon_Text, Seera_Text, Bulduria_Text, Stelorum_Text, Aquiluma_Text, Cancel_Text
# 101 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ClansLoreBook_2
# 108 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ClansLoreBook_3
# 115 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ClansLoreBook_4
# 122 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ClansLoreBook_5
# 129 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq ClansLoreBook_6
# 136 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq ClansLoreBook_7
# 143 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq ClansLoreBook_8
# 150 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq ClansLoreBook_9
# 157 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq ClansLoreBook_10
# 164 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq ClansLoreBook_11
# 171 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_eq ClansLoreBook_12
# 178 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 11
	goto_if_eq ClansLoreBook_13
# 185 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 12
	goto_if_eq ClansLoreBook_14
# 192 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 13
	goto_if_eq ClansLoreBook_15
# 199 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 14
	goto_if_eq ClansLoreBook_16
# 206 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 15
	goto_if_eq ClansLoreBook_17
# 213 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 16
	goto_if_eq ClansLoreBook_18
# 220 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 17
	goto_if_eq ClansLoreBook_19
# 227 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	compare VAR_RESULT, 18
	goto_if_eq ClansLoreBook_20
ClansLoreBook_1:
# 233 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	closemessage
# 234 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	release
	end

ClansLoreBook_2:
# 103 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan1_Text, MSGBOX_DEFAULT
# 104 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_VESPIQUEN, 10, 3
# 105 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan1_2_Text, MSGBOX_DEFAULT
# 106 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_3:
# 110 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan2_Text, MSGBOX_DEFAULT
# 111 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_HONCHKROW, 10, 3
# 112 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan2_2_Text, MSGBOX_DEFAULT
# 113 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_4:
# 117 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan3_Text, MSGBOX_DEFAULT
# 118 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_DRAGONITE, 10, 3
# 119 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan3_2_Text, MSGBOX_DEFAULT
# 120 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_5:
# 124 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan4_Text, MSGBOX_DEFAULT
# 125 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_ELECTIVIRE, 10, 3
# 126 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan4_2_Text, MSGBOX_DEFAULT
# 127 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_6:
# 131 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan5_Text, MSGBOX_DEFAULT
# 132 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_GARDEVOIR, 10, 3
# 133 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan5_2_Text, MSGBOX_DEFAULT
# 134 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_7:
# 138 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan6_Text, MSGBOX_DEFAULT
# 139 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_LUCARIO, 10, 3
# 140 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan6_2_Text, MSGBOX_DEFAULT
# 141 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_8:
# 145 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan7_Text, MSGBOX_DEFAULT
# 146 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_MAGMORTAR, 10, 3
# 147 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan7_2_Text, MSGBOX_DEFAULT
# 148 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_9:
# 152 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan8_Text, MSGBOX_DEFAULT
# 153 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_PIDGEOT, 10, 3
# 154 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan8_2_Text, MSGBOX_DEFAULT
# 155 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_10:
# 159 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan9_Text, MSGBOX_DEFAULT
# 160 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_AEGISLASH, 10, 3
# 161 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan9_2_Text, MSGBOX_DEFAULT
# 162 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_11:
# 166 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan10_Text, MSGBOX_DEFAULT
# 167 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_TORTERRA, 10, 3
# 168 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan10_2_Text, MSGBOX_DEFAULT
# 169 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_12:
# 173 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan11_Text, MSGBOX_DEFAULT
# 174 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_GOLURK, 10, 3
# 175 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan11_2_Text, MSGBOX_DEFAULT
# 176 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_13:
# 180 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan12_Text, MSGBOX_DEFAULT
# 181 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_ABOMASNOW, 10, 3
# 182 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan12_2_Text, MSGBOX_DEFAULT
# 183 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_14:
# 187 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan13_Text, MSGBOX_DEFAULT
# 188 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_URSALUNA, 10, 3
# 189 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan13_2_Text, MSGBOX_DEFAULT
# 190 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_15:
# 194 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan14_Text, MSGBOX_DEFAULT
# 195 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_SALAZZLE, 10, 3
# 196 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan14_2_Text, MSGBOX_DEFAULT
# 197 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_16:
# 201 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan15_Text, MSGBOX_DEFAULT
# 202 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_ALAKAZAM, 10, 3
# 203 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan15_2_Text, MSGBOX_DEFAULT
# 204 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_17:
# 208 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan16_Text, MSGBOX_DEFAULT
# 209 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_ONIX, 10, 3
# 210 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan16_2_Text, MSGBOX_DEFAULT
# 211 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_18:
# 215 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan17_Text, MSGBOX_DEFAULT
# 216 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_METAGROSS, 10, 3
# 217 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan17_2_Text, MSGBOX_DEFAULT
# 218 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_19:
# 222 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan18_Text, MSGBOX_DEFAULT
# 223 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	showmonpic SPECIES_LAPRAS, 10, 3
# 224 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	msgbox Clan18_2_Text, MSGBOX_DEFAULT
# 225 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	hidemonpic
	goto ClansLoreBook_1

ClansLoreBook_20:
# 229 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	closemessage
# 230 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	release
	end


DoSleepMorning_Text::
# 77 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Morning$"

DoSleepDay_Text::
# 81 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Day$"

DoSleepEvening_Text::
# 85 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Evening$"

DoSleepNight_Text::
# 89 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Night$"

DoSleep_Text::
# 93 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Sleep unitl?$"

BookPrompt_Text::
# 238 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Which of the 18 Clans of Astralis do you\n"
	.string "wish to learn about?$"

Insca_Text::
# 242 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Incsa Clan$"

Umbrum_Text::
# 246 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Umbrum Clan$"

Wylkera_Text::
# 250 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Wylkera Clan$"

Sprkwick_Text::
# 254 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Sprkwick Clan$"

Faesken_Text::
# 258 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Faesken Clan$"

Valknight_Text::
# 262 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Valknight Clan$"

Emburn_Text::
# 266 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Emburn Clan$"

Aeravis_Text::
# 270 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Aeravis Clan$"

Mortus_Text::
# 274 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Mortus Clan$"

Gardia_Text::
# 278 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Gardia Clan$"

acTera_Text::
# 282 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "ac Tera Clan$"

Icisica_Text::
# 286 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Icisica Clan$"

Mansons_Text::
# 290 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Mansons Clan$"

Viadon_Text::
# 294 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Viadon Clan$"

Seera_Text::
# 298 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Seera Clan$"

Bulduria_Text::
# 302 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Bulduria Clan$"

Stelorum_Text::
# 306 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Stelorum Clan$"

Aquiluma_Text::
# 310 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Aquliuma Clan$"

Cancel_Text::
# 314 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Close Book$"

Clan1_Text::
# 318 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Incsa Clan: Bug-Type\n"
	.string "Location: Hanaka Village\l"
	.string "$"

Clan2_Text::
# 322 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Umbrum Clan: Dark-Type\n"
	.string "Location: Fortuna City\l"
	.string "$"

Clan3_Text::
# 326 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Wylkera Clan: Dragon-Type\n"
	.string "Location: Wyrmshire & Wyrmspire Keep\l"
	.string "$"

Clan4_Text::
# 330 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Sprkwick Clan: Electric-Type\n"
	.string "Location: Hydroelectric Dam\l"
	.string "$"

Clan5_Text::
# 334 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Faesken Clan: Fairy-Type\n"
	.string "Location: Mysteria\l"
	.string "$"

Clan6_Text::
# 338 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Valknight Clan: Fighting-Type\n"
	.string "Location: Fort Valorite\l"
	.string "$"

Clan7_Text::
# 342 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Emburn Clan: Fire-Type\n"
	.string "Location: Cynderhail Sect\l"
	.string "$"

Clan8_Text::
# 346 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Aeravis Clan: Flying-Type\n"
	.string "Location: Hanaka Village\l"
	.string "$"

Clan9_Text::
# 350 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Mortus Clan: Ghost-Type\n"
	.string "Location: Great Desert\l"
	.string "$"

Clan10_Text::
# 354 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Gardia Clan: Grass-Type\n"
	.string "Location: Greensfield\l"
	.string "$"

Clan11_Text::
# 358 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "ac Tera Clan: Ground-Type\n"
	.string "Location: Desert Oasis\l"
	.string "$"

Clan12_Text::
# 362 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Icisica Clan: Ice-Type\n"
	.string "Location: Cynderhail Sect\l"
	.string "$"

Clan13_Text::
# 366 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Mansons Clan: Normal-Type\n"
	.string "Location: Greensfield\l"
	.string "$"

Clan14_Text::
# 370 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Viadon Clan: Poison-Type\n"
	.string "Location: Fortuna City\l"
	.string "$"

Clan15_Text::
# 374 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Seera Clan: Psychic-Type\n"
	.string "Location: Mysteria\l"
	.string "$"

Clan16_Text::
# 378 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Bulduria Clan: Rock-Type\n"
	.string "Location: Nexium Caverns\l"
	.string "$"

Clan17_Text::
# 382 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Stelorum Clan: Steel-Type\n"
	.string "Location: Ironforge City\l"
	.string "$"

Clan18_Text::
# 386 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Aquliuma Clan: Water-Type\n"
	.string "Location: Marina Port\l"
	.string "$"

Clan1_2_Text::
# 390 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Vespiquen\l"
	.string "Relic: Buginium Z$"

Clan2_2_Text::
# 394 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Honchkrow\l"
	.string "Relic: Darkinium Z$"

Clan3_2_Text::
# 398 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Dragonite\l"
	.string "Relic: Dragonium Z$"

Clan4_2_Text::
# 402 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Electivire\l"
	.string "Relic: Electrium Z$"

Clan5_2_Text::
# 406 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Gardevoir\l"
	.string "Relic: Fairium Z$"

Clan6_2_Text::
# 410 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Lucario\l"
	.string "Relic: Fightinium Z$"

Clan7_2_Text::
# 414 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Magmortar\l"
	.string "Relic: Firium Z$"

Clan8_2_Text::
# 418 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Pidgeot\l"
	.string "Relic: Flyinium Z$"

Clan9_2_Text::
# 422 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Aegislash\l"
	.string "Relic: Ghostium Z$"

Clan10_2_Text::
# 426 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Torterra\l"
	.string "Relic: Grassium Z$"

Clan11_2_Text::
# 430 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Golurk\l"
	.string "Relic: Groundium Z$"

Clan12_2_Text::
# 434 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Abomasnow\l"
	.string "Relic: Icium Z$"

Clan13_2_Text::
# 438 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Ursaluna\l"
	.string "Relic: Normalium Z$"

Clan14_2_Text::
# 442 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Salazzle\l"
	.string "Relic: Poisonium Z$"

Clan15_2_Text::
# 446 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Alakazam\l"
	.string "Relic: Psychium Z$"

Clan16_2_Text::
# 450 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Onix\l"
	.string "Relic: Rockium Z$"

Clan17_2_Text::
# 454 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Metagross\l"
	.string "Relic: Steelium Z$"

Clan18_2_Text::
# 458 "data/maps/TestAreaPlayerHomeFloor2/scripts.pory"
	.string "Noble: Lapras\l"
	.string "Relic: Waterium Z$"
