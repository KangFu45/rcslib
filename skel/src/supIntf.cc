/*
*	New C++ File starts here.
*	This file should be named skel.cc
*/

// Include all NML, CMS, and RCS classes and functions
#include "rcs.hh"

// Include command and status message definitions
#include "skel.hh"
#include "supIntf.hh"
#include "skelIntf.hh"

// Forward Function Prototypes


#ifndef MAX_SUPINTF_NAME_LENGTH
#define MAX_SUPINTF_NAME_LENGTH 16
#endif
#ifndef SUPINTF_NAME_LIST_LENGTH
#define SUPINTF_NAME_LIST_LENGTH 12
#endif


/* This list must be in alphabetical order and the three lists must correspond. */
const char supIntf_name_list[SUPINTF_NAME_LIST_LENGTH][MAX_SUPINTF_NAME_LENGTH]= {
	"SupCfgCycleTime", /* 0,2302 */
	"SupCfgDebug", /* 1,2303 */
	"SupCfgNop", /* 2,2301 */
	"SupCmdAbort", /* 3,2103 */
	"SupCmdHalt", /* 4,2104 */
	"SupCmdInit", /* 5,2102 */
	"SupCmdNop", /* 6,2101 */
	"SupCmdShutdown", /* 7,2105 */
	"SupCmdTask", /* 8,2106 */
	"SupSet", /* 9,2401 */
	"SupStat", /* 10,2201 */
	""};
const NMLTYPE supIntf_id_list[SUPINTF_NAME_LIST_LENGTH]= {
	SUP_CFG_CYCLE_TIME_TYPE, /* 0,2302 */
	SUP_CFG_DEBUG_TYPE, /* 1,2303 */
	SUP_CFG_NOP_TYPE, /* 2,2301 */
	SUP_CMD_ABORT_TYPE, /* 3,2103 */
	SUP_CMD_HALT_TYPE, /* 4,2104 */
	SUP_CMD_INIT_TYPE, /* 5,2102 */
	SUP_CMD_NOP_TYPE, /* 6,2101 */
	SUP_CMD_SHUTDOWN_TYPE, /* 7,2105 */
	SUP_CMD_TASK_TYPE, /* 8,2106 */
	SUP_SET_TYPE, /* 9,2401 */
	SUP_STAT_TYPE, /* 10,2201 */
	-1};
const size_t supIntf_size_list[SUPINTF_NAME_LIST_LENGTH]= {
	sizeof(SupCfgCycleTime),
	sizeof(SupCfgDebug),
	sizeof(SupCfgNop),
	sizeof(SupCmdAbort),
	sizeof(SupCmdHalt),
	sizeof(SupCmdInit),
	sizeof(SupCmdNop),
	sizeof(SupCmdShutdown),
	sizeof(SupCmdTask),
	sizeof(SupSet),
	sizeof(SupStat),
	0};
const char *supIntf_symbol_lookup(long type);


// Enumerated Type Constants

// RCS_STATUS
#ifndef MAX_ENUM_RCS_STATUS_STRING_LENGTH
#define MAX_ENUM_RCS_STATUS_STRING_LENGTH 21
#endif
#ifndef ENUM_RCS_STATUS_LENGTH
#define ENUM_RCS_STATUS_LENGTH 5
#endif

static const char enum_RCS_STATUS_string_list[ENUM_RCS_STATUS_LENGTH][MAX_ENUM_RCS_STATUS_STRING_LENGTH]= {
	"RCS_DONE", /* 0,1 */
	"RCS_ERROR", /* 1,3 */
	"RCS_EXEC", /* 2,2 */
	"UNINITIALIZED_STATUS", /* 3,-1 */
	""};

static const int enum_RCS_STATUS_int_list[ENUM_RCS_STATUS_LENGTH]= {
	RCS_DONE, /* 0,1 */
	RCS_ERROR, /* 1,3 */
	RCS_EXEC, /* 2,2 */
	UNINITIALIZED_STATUS, /* 3,-1 */
	};

const char *supIntf_enum_RCS_STATUS_symbol_lookup(long v)
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

static const struct cms_enum_info enum_RCS_STATUS_info_struct={
	"RCS_STATUS",
	(const char **)enum_RCS_STATUS_string_list,
	enum_RCS_STATUS_int_list,
	MAX_ENUM_RCS_STATUS_STRING_LENGTH,
	ENUM_RCS_STATUS_LENGTH,
	(cms_symbol_lookup_function_t)supIntf_enum_RCS_STATUS_symbol_lookup
	};

/*
Estimated_size	SupCfgCycleTime	32
Estimated_size	SupCfgDebug	32
Estimated_size	SupCfgNop	24
Estimated_size	SupCmdAbort	24
Estimated_size	SupCmdHalt	24
Estimated_size	SupCmdInit	24
Estimated_size	SupCmdNop	24
Estimated_size	SupCmdShutdown	24
Estimated_size	SupCmdTask	32
Estimated_size	SupSet	144
Estimated_size	SupStat	144
Estimated_size	MAXIMUM	144
*/
/*
*	NML/CMS Format function : supIntf_format
*	Automatically generated by NML CodeGen Java Applet.
*	on Thu Mar 09 10:54:23 EST 2006
*/
int supIntf_format(NMLTYPE type, void *buffer, CMS *cms)
{

	type = cms->check_type_info(type,buffer,"supIntf",
		(cms_symbol_lookup_function_t) supIntf_symbol_lookup,
		(const char **)supIntf_name_list,
		supIntf_id_list,supIntf_size_list,
		SUPINTF_NAME_LIST_LENGTH,
		MAX_SUPINTF_NAME_LENGTH);

	switch(type)
	{
	case SUP_CFG_CYCLE_TIME_TYPE:
		((SupCfgCycleTime *) buffer)->update(cms);
		break;
	case SUP_CFG_DEBUG_TYPE:
		((SupCfgDebug *) buffer)->update(cms);
		break;
	case SUP_CFG_NOP_TYPE:
		((SupCfgNop *) buffer)->update(cms);
		break;
	case SUP_CMD_ABORT_TYPE:
		((SupCmdAbort *) buffer)->update(cms);
		break;
	case SUP_CMD_HALT_TYPE:
		((SupCmdHalt *) buffer)->update(cms);
		break;
	case SUP_CMD_INIT_TYPE:
		((SupCmdInit *) buffer)->update(cms);
		break;
	case SUP_CMD_NOP_TYPE:
		((SupCmdNop *) buffer)->update(cms);
		break;
	case SUP_CMD_SHUTDOWN_TYPE:
		((SupCmdShutdown *) buffer)->update(cms);
		break;
	case SUP_CMD_TASK_TYPE:
		((SupCmdTask *) buffer)->update(cms);
		break;
	case SUP_SET_TYPE:
		((SupSet *) buffer)->update(cms);
		break;
	case SUP_STAT_TYPE:
		((SupStat *) buffer)->update(cms);
		break;

	default:
		return(0);
	}
	return 1;
}


// NML Symbol Lookup Function
const char *supIntf_symbol_lookup(long type)
{
	switch(type)
	{
	case SUP_CFG_CYCLE_TIME_TYPE:
		return "SupCfgCycleTime";
	case SUP_CFG_DEBUG_TYPE:
		return "SupCfgDebug";
	case SUP_CFG_NOP_TYPE:
		return "SupCfgNop";
	case SUP_CMD_ABORT_TYPE:
		return "SupCmdAbort";
	case SUP_CMD_HALT_TYPE:
		return "SupCmdHalt";
	case SUP_CMD_INIT_TYPE:
		return "SupCmdInit";
	case SUP_CMD_NOP_TYPE:
		return "SupCmdNop";
	case SUP_CMD_SHUTDOWN_TYPE:
		return "SupCmdShutdown";
	case SUP_CMD_TASK_TYPE:
		return "SupCmdTask";
	case SUP_SET_TYPE:
		return "SupSet";
	case SUP_STAT_TYPE:
		return "SupStat";
	default:
		return"UNKNOWN";
		break;
	}
	return(NULL);
}

/*
*	NML/CMS Update function for SupCfgDebug
*	Automatically generated by NML CodeGen Java Applet.
*	on Thu Mar 09 10:54:23 EST 2006
*/
void SupCfgDebug::update(CMS *cms)
{

	cms->beginClass("SupCfgDebug","RCS_CMD_MSG");
	RCS_CMD_MSG::update_cmd_msg_base(cms);
	cms->update_with_name("debug",debug);

	cms->endClass("SupCfgDebug","RCS_CMD_MSG");

}


/*
*	NML/CMS Update function for SupStat
*	Automatically generated by NML CodeGen Java Applet.
*	on Thu Mar 09 10:54:23 EST 2006
*/
void SupStat::update(CMS *cms)
{

	cms->beginClass("SupStat","RCS_STAT_MSG");

	RCS_STAT_MSG::update_stat_msg_base(cms);
	cms->update_with_name("heartbeat",heartbeat);
	cms->update_with_name("what",what);

	cms->endClass("SupStat","RCS_STAT_MSG");

}


/*
*	NML/CMS Update function for SupCmdNop
*	Automatically generated by NML CodeGen Java Applet.
*	on Thu Mar 09 10:54:23 EST 2006
*/
void SupCmdNop::update(CMS *cms)
{

	cms->beginClass("SupCmdNop","RCS_CMD_MSG");
	RCS_CMD_MSG::update_cmd_msg_base(cms);

	cms->endClass("SupCmdNop","RCS_CMD_MSG");

}


/*
*	NML/CMS Update function for SupCfgNop
*	Automatically generated by NML CodeGen Java Applet.
*	on Thu Mar 09 10:54:23 EST 2006
*/
void SupCfgNop::update(CMS *cms)
{

	cms->beginClass("SupCfgNop","RCS_CMD_MSG");
	RCS_CMD_MSG::update_cmd_msg_base(cms);

	cms->endClass("SupCfgNop","RCS_CMD_MSG");

}


/*
*	NML/CMS Update function for SupCmdAbort
*	Automatically generated by NML CodeGen Java Applet.
*	on Thu Mar 09 10:54:23 EST 2006
*/
void SupCmdAbort::update(CMS *cms)
{

	cms->beginClass("SupCmdAbort","RCS_CMD_MSG");
	RCS_CMD_MSG::update_cmd_msg_base(cms);

	cms->endClass("SupCmdAbort","RCS_CMD_MSG");

}


/*
*	NML/CMS Update function for SupCmdHalt
*	Automatically generated by NML CodeGen Java Applet.
*	on Thu Mar 09 10:54:23 EST 2006
*/
void SupCmdHalt::update(CMS *cms)
{

	cms->beginClass("SupCmdHalt","RCS_CMD_MSG");
	RCS_CMD_MSG::update_cmd_msg_base(cms);

	cms->endClass("SupCmdHalt","RCS_CMD_MSG");

}


/*
*	NML/CMS Update function for SupSet
*	Automatically generated by NML CodeGen Java Applet.
*	on Thu Mar 09 10:54:23 EST 2006
*/
void SupSet::update(CMS *cms)
{

	cms->beginClass("SupSet","RCS_STAT_MSG");

	RCS_STAT_MSG::update_stat_msg_base(cms);
	cms->update_with_name("cycleTime",cycleTime);
	cms->update_with_name("debug",debug);

	cms->endClass("SupSet","RCS_STAT_MSG");

}


/*
*	NML/CMS Update function for SupCmdShutdown
*	Automatically generated by NML CodeGen Java Applet.
*	on Thu Mar 09 10:54:23 EST 2006
*/
void SupCmdShutdown::update(CMS *cms)
{

	cms->beginClass("SupCmdShutdown","RCS_CMD_MSG");
	RCS_CMD_MSG::update_cmd_msg_base(cms);

	cms->endClass("SupCmdShutdown","RCS_CMD_MSG");

}


/*
*	NML/CMS Update function for SupCfgCycleTime
*	Automatically generated by NML CodeGen Java Applet.
*	on Thu Mar 09 10:54:23 EST 2006
*/
void SupCfgCycleTime::update(CMS *cms)
{

	cms->beginClass("SupCfgCycleTime","RCS_CMD_MSG");
	RCS_CMD_MSG::update_cmd_msg_base(cms);
	cms->update_with_name("cycleTime",cycleTime);

	cms->endClass("SupCfgCycleTime","RCS_CMD_MSG");

}


/*
*	NML/CMS Update function for SupCmdInit
*	Automatically generated by NML CodeGen Java Applet.
*	on Thu Mar 09 10:54:23 EST 2006
*/
void SupCmdInit::update(CMS *cms)
{

	cms->beginClass("SupCmdInit","RCS_CMD_MSG");
	RCS_CMD_MSG::update_cmd_msg_base(cms);

	cms->endClass("SupCmdInit","RCS_CMD_MSG");

}


/*
*	NML/CMS Update function for SupCmdTask
*	Automatically generated by NML CodeGen Java Applet.
*	on Thu Mar 09 10:54:23 EST 2006
*/
void SupCmdTask::update(CMS *cms)
{

	cms->beginClass("SupCmdTask","RCS_CMD_MSG");
	RCS_CMD_MSG::update_cmd_msg_base(cms);
	cms->update_with_name("what",what);

	cms->endClass("SupCmdTask","RCS_CMD_MSG");

}
