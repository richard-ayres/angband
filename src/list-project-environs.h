/*
 * File: src/list-project-environs.h
 * Purpose: Spell types used by project() and related functions.
 *
 * Fields:
 * name - type index 
 * color - color of the effect
 * floor handler - handler affecting the floor
 */

/* name  			color				floor handler*/
PROJ_ENV(LIGHT_WEAK,TERM_ORANGE,		FH(LIGHT))
PROJ_ENV(DARK_WEAK,	TERM_L_DARK,		FH(DARK))
PROJ_ENV(KILL_WALL,	TERM_WHITE,			FH(KILL_WALL))
PROJ_ENV(KILL_DOOR,	TERM_WHITE,			FH(KILL_DOOR))
PROJ_ENV(KILL_TRAP,	TERM_WHITE,			FH(KILL_TRAP))
PROJ_ENV(MAKE_WALL,	TERM_WHITE,			NULL)
PROJ_ENV(MAKE_DOOR,	TERM_WHITE,			FH(MAKE_DOOR))
PROJ_ENV(MAKE_TRAP,	TERM_WHITE,			FH(MAKE_TRAP))
PROJ_ENV(MAX,		TERM_WHITE,			NULL)
