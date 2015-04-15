/*
*	New C++ File starts here.
*	This file should be named bgn_c_n.c
*/

/* Include all C language NML and CMS function prototypes. */
#include "nmlcms_c.h"

/* Include externally supplied prototypes. */
#include "bgn_c_n.h"

/* Forward Function Prototypes */
#ifdef __cplusplus
extern "C" {
#endif

void cms_BG_CONFIG_update(struct cms_c_struct *cms, nml_BG_CONFIG_c_t *x);
void cms_PM_CARTESIAN_update(struct cms_c_struct *cms, nml_PM_CARTESIAN_c_t *x);
void cms_BG_GOTO_GOAL_update(struct cms_c_struct *cms, nml_BG_GOTO_GOAL_c_t *x);
void cms_BG_HALT_update(struct cms_c_struct *cms, nml_BG_HALT_c_t *x);
void cms_BG_INIT_update(struct cms_c_struct *cms, nml_BG_INIT_c_t *x);
void cms_BG_STATUS_update(struct cms_c_struct *cms, nml_BG_STATUS_c_t *x);

#ifdef __cplusplus
}
#endif
long nml_bg_open(const char *buf, const char *proc, const char *cfg)
{
	return (long) nml_new(bg_c_format, buf,proc,cfg);
}

int  nml_bg_valid(long nml_id)
{
	return (int) nml_valid( (nml_c_t) nml_id);
}

void nml_bg_close(long nml_id)
{
	nml_free( (nml_c_t) nml_id);
}

int nml_bg_read(long nml_id)
{
	return (long) nml_read( (nml_c_t) nml_id);
}

int nml_bg_BG_CONFIG_write(long nml_id, const nml_BG_CONFIG_c_t *msg){
	return (int) nml_write( (nml_c_t) nml_id,(void *) msg, (nmltype_c_t) 4001,sizeof(nml_BG_CONFIG_c_t));
}

nml_BG_CONFIG_c_t * nml_bg_BG_CONFIG_get_msg(long nml_id){
	return (nml_BG_CONFIG_c_t *) nml_get_address( (nml_c_t) nml_id);
}

int nml_bg_BG_GOTO_GOAL_write(long nml_id, const nml_BG_GOTO_GOAL_c_t *msg){
	return (int) nml_write( (nml_c_t) nml_id,(void *) msg, (nmltype_c_t) 4002,sizeof(nml_BG_GOTO_GOAL_c_t));
}

nml_BG_GOTO_GOAL_c_t * nml_bg_BG_GOTO_GOAL_get_msg(long nml_id){
	return (nml_BG_GOTO_GOAL_c_t *) nml_get_address( (nml_c_t) nml_id);
}

int nml_bg_BG_HALT_write(long nml_id, const nml_BG_HALT_c_t *msg){
	return (int) nml_write( (nml_c_t) nml_id,(void *) msg, (nmltype_c_t) 4003,sizeof(nml_BG_HALT_c_t));
}

nml_BG_HALT_c_t * nml_bg_BG_HALT_get_msg(long nml_id){
	return (nml_BG_HALT_c_t *) nml_get_address( (nml_c_t) nml_id);
}

int nml_bg_BG_INIT_write(long nml_id, const nml_BG_INIT_c_t *msg){
	return (int) nml_write( (nml_c_t) nml_id,(void *) msg, (nmltype_c_t) 4004,sizeof(nml_BG_INIT_c_t));
}

nml_BG_INIT_c_t * nml_bg_BG_INIT_get_msg(long nml_id){
	return (nml_BG_INIT_c_t *) nml_get_address( (nml_c_t) nml_id);
}

int nml_bg_BG_STATUS_write(long nml_id, const nml_BG_STATUS_c_t *msg){
	return (int) nml_write( (nml_c_t) nml_id,(void *) msg, (nmltype_c_t) 4000,sizeof(nml_BG_STATUS_c_t));
}

nml_BG_STATUS_c_t * nml_bg_BG_STATUS_get_msg(long nml_id){
	return (nml_BG_STATUS_c_t *) nml_get_address( (nml_c_t) nml_id);
}




#ifndef MAX_BG_C_NAME_LENGTH
#define MAX_BG_C_NAME_LENGTH 13
#endif
#ifndef BG_C_NAME_LIST_LENGTH
#define BG_C_NAME_LIST_LENGTH 6
#endif


/* This list must be in alphabetical order and the three lists must correspond. */
const char bg_c_name_list[BG_C_NAME_LIST_LENGTH][MAX_BG_C_NAME_LENGTH]= {
	"BG_CONFIG", /* 0,4001 */
	"BG_GOTO_GOAL", /* 1,4002 */
	"BG_HALT", /* 2,4003 */
	"BG_INIT", /* 3,4004 */
	"BG_STATUS", /* 4,4000 */
	""};
const NMLTYPE bg_c_id_list[BG_C_NAME_LIST_LENGTH]= {
	BG_CONFIG_TYPE, /* 0,4001 */
	BG_GOTO_GOAL_TYPE, /* 1,4002 */
	BG_HALT_TYPE, /* 2,4003 */
	BG_INIT_TYPE, /* 3,4004 */
	BG_STATUS_TYPE, /* 4,4000 */
	-1};
const size_t bg_c_size_list[BG_C_NAME_LIST_LENGTH]= {
	sizeof(nml_BG_CONFIG_c_t),
	sizeof(nml_BG_GOTO_GOAL_c_t),
	sizeof(nml_BG_HALT_c_t),
	sizeof(nml_BG_INIT_c_t),
	sizeof(nml_BG_STATUS_c_t),
	0};
const char *bg_c_symbol_lookup(long type);


/* Enumerated Type Constants */

/*  RCS_STATUS */
#ifndef MAX_ENUM_RCS_STATUS_STRING_LENGTH
#define MAX_ENUM_RCS_STATUS_STRING_LENGTH 21
#endif
#ifndef ENUM_RCS_STATUS_LENGTH
#define ENUM_RCS_STATUS_LENGTH 5
#endif

const char enum_RCS_STATUS_string_list[ENUM_RCS_STATUS_LENGTH][MAX_ENUM_RCS_STATUS_STRING_LENGTH]= {
	"RCS_DONE", /* 0,1 */
	"RCS_ERROR", /* 1,3 */
	"RCS_EXEC", /* 2,2 */
	"UNINITIALIZED_STATUS", /* 3,-1 */
	""};

const int enum_RCS_STATUS_int_list[ENUM_RCS_STATUS_LENGTH]= {
	RCS_DONE, /* 0,1 */
	RCS_ERROR, /* 1,3 */
	RCS_EXEC, /* 2,2 */
	UNINITIALIZED_STATUS, /* 3,-1 */
	};

const char *bg_c_enum_RCS_STATUS_symbol_lookup(long v)
{
	switch(v)
	{
		case RCS_DONE: return("RCS_DONE"); /* 1 */
		case RCS_ERROR: return("RCS_ERROR"); /* 3 */
		case RCS_EXEC: return("RCS_EXEC"); /* 2 */
		case UNINITIALIZED_STATUS: return("UNINITIALIZED_STATUS"); /* -1 */
		default:break;
	}
	return(NULL);
}

const struct cms_enum_info enum_RCS_STATUS_info_struct={
	"RCS_STATUS",
	(const char **)enum_RCS_STATUS_string_list,
	enum_RCS_STATUS_int_list,
	MAX_ENUM_RCS_STATUS_STRING_LENGTH,
	ENUM_RCS_STATUS_LENGTH,
	(cms_symbol_lookup_function_t)bg_c_enum_RCS_STATUS_symbol_lookup
	};

/*
*	NML/CMS Format function : bg_c_format
*	Automatically generated by NML CodeGen Java Applet.
*	on Sat Feb 25 10:10:15 EST 2006
*/
int bg_c_format(long type, void *buffer, struct cms_c_struct *cms)
{

	type = cms_check_type_info(cms,type,buffer,"bg_c",
		(cms_symbol_lookup_function_t) bg_c_symbol_lookup,
		(const char **)bg_c_name_list,
		bg_c_id_list,bg_c_size_list,
		BG_C_NAME_LIST_LENGTH,
		MAX_BG_C_NAME_LENGTH);

	switch(type)
	{
	case BG_CONFIG_TYPE:
		cms_BG_CONFIG_update(cms,(nml_BG_CONFIG_c_t *) buffer);
		break;
	case BG_GOTO_GOAL_TYPE:
		cms_BG_GOTO_GOAL_update(cms,(nml_BG_GOTO_GOAL_c_t *) buffer);
		break;
	case BG_HALT_TYPE:
		cms_BG_HALT_update(cms,(nml_BG_HALT_c_t *) buffer);
		break;
	case BG_INIT_TYPE:
		cms_BG_INIT_update(cms,(nml_BG_INIT_c_t *) buffer);
		break;
	case BG_STATUS_TYPE:
		cms_BG_STATUS_update(cms,(nml_BG_STATUS_c_t *) buffer);
		break;

	default:
		return(0);
	}
	return 1;
}


/* NML Symbol Lookup Function */
const char *bg_c_symbol_lookup(long type)
{
	switch(type)
	{
	case BG_CONFIG_TYPE:
		return "BG_CONFIG";
	case BG_GOTO_GOAL_TYPE:
		return "BG_GOTO_GOAL";
	case BG_HALT_TYPE:
		return "BG_HALT";
	case BG_INIT_TYPE:
		return "BG_INIT";
	case BG_STATUS_TYPE:
		return "BG_STATUS";
	default:
		return"UNKNOWN";
		break;
	}
	return(NULL);
}

/*
*	NML/CMS Update function for BG_HALT
*	Automatically generated by NML CodeGen Java Applet.
*	on Sat Feb 25 10:10:15 EST 2006
*/
void cms_BG_HALT_update(struct cms_c_struct *cms, nml_BG_HALT_c_t *x)
{

	cms_begin_class(cms,"BG_HALT","RCS_CMD_MSG");
	cms_begin_update_cmd_msg_base(cms,(void*)x);
	cms_update_int(cms,"serial_number",&(x->serial_number));	cms_end_update_cmd_msg_base(cms,(void*)x);

	cms_end_class(cms,"BG_HALT","RCS_CMD_MSG");

}


/*
*	NML/CMS Update function for BG_STATUS
*	Automatically generated by NML CodeGen Java Applet.
*	on Sat Feb 25 10:10:15 EST 2006
*/
void cms_BG_STATUS_update(struct cms_c_struct *cms, nml_BG_STATUS_c_t *x)
{

	cms_begin_class(cms,"BG_STATUS","RCS_STAT_MSG");
	cms_begin_update_stat_msg_base(cms,(void*)x);
	cms_update_long(cms,"command_type",&(x->command_type));
	cms_update_int(cms,"echo_serial_number",&(x->echo_serial_number));
	cms_update_int(cms,"status",&(x->status));
	cms_update_int(cms,"state",&(x->state));
	cms_update_int(cms,"source_line",&(x->source_line));
	cms_update_char_array(cms,"source_file",(x->source_file),64);
	cms_end_update_stat_msg_base(cms,(void*)x);

	cms_end_class(cms,"BG_STATUS","RCS_STAT_MSG");

}


/*
*	NML/CMS Update function for BG_INIT
*	Automatically generated by NML CodeGen Java Applet.
*	on Sat Feb 25 10:10:15 EST 2006
*/
void cms_BG_INIT_update(struct cms_c_struct *cms, nml_BG_INIT_c_t *x)
{

	cms_begin_class(cms,"BG_INIT","RCS_CMD_MSG");
	cms_begin_update_cmd_msg_base(cms,(void*)x);
	cms_update_int(cms,"serial_number",&(x->serial_number));	cms_end_update_cmd_msg_base(cms,(void*)x);

	cms_end_class(cms,"BG_INIT","RCS_CMD_MSG");

}


/*
*	NML/CMS Update function for BG_CONFIG
*	Automatically generated by NML CodeGen Java Applet.
*	on Sat Feb 25 10:10:15 EST 2006
*/
void cms_BG_CONFIG_update(struct cms_c_struct *cms, nml_BG_CONFIG_c_t *x)
{

	cms_begin_class(cms,"BG_CONFIG","RCS_CMD_MSG");
	cms_begin_update_cmd_msg_base(cms,(void*)x);
	cms_update_int(cms,"serial_number",&(x->serial_number));	cms_end_update_cmd_msg_base(cms,(void*)x);

	cms_end_class(cms,"BG_CONFIG","RCS_CMD_MSG");

}


/*
*	NML/CMS Update function for BG_GOTO_GOAL
*	Automatically generated by NML CodeGen Java Applet.
*	on Sat Feb 25 10:10:15 EST 2006
*/
void cms_BG_GOTO_GOAL_update(struct cms_c_struct *cms, nml_BG_GOTO_GOAL_c_t *x)
{

	cms_begin_class(cms,"BG_GOTO_GOAL","RCS_CMD_MSG");
	cms_begin_update_cmd_msg_base(cms,(void*)x);
	cms_update_int(cms,"serial_number",&(x->serial_number));	cms_end_update_cmd_msg_base(cms,(void*)x);
	cms_begin_class_var(cms,"goal");
	cms_PM_CARTESIAN_update(cms, ( nml_PM_CARTESIAN_c_t *) &(x->goal));
	cms_end_class_var(cms,"goal");

	cms_end_class(cms,"BG_GOTO_GOAL","RCS_CMD_MSG");

}
