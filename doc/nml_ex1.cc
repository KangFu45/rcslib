/*
*	New C++ File starts here.
*	This file should be named nml_ex1.cc
*	Automatically generated by NML CodeGen Java Applet.
*	with command line arguments :  HHFile=nml_ex1.hh -o nml_ex1.cc
*	RCS_VERSION=@(#) RCS_LIBRARY_VERSION: 2009.06.05_1506:1507 Compiled on Mon Jun  8 09:24:56 EDT 2009 for the java platform.
*	$Id: CodeGenCommon.java 1514 2009-06-12 20:09:37Z shackle $
*
*	.gen script :
*		0:load nml_ex1.hh
*		1:clear
*		2:select_from_file nml_ex1.hh
*		3:generate C++ format>nml_ex1.cc
*		4:generate C++ update>nml_ex1.cc
*		5:generate C++ constructor>nml_ex1.cc
*		6:exit
*
*/

// Include all NML, CMS, and RCS classes and functions
#include "rcs.hh"

// Include command and status message definitions
#include "nml_ex1.hh"

// Forward Function Prototypes


#ifndef EX_NAME_LIST_LENGTH
#define EX_NAME_LIST_LENGTH 2
#endif

const NMLTYPE ex_id_list[EX_NAME_LIST_LENGTH]= {
	EXAMPLE_MSG_TYPE, /* 0,101 */
	-1};
const size_t ex_size_list[EX_NAME_LIST_LENGTH]= {
	sizeof(EXAMPLE_MSG),
	0};


// Enumerated Type Constants

/*
Estimated_size	EXAMPLE_MSG	248
Estimated_size	MAXIMUM	248
*/
/*
*	NML/CMS Format function : ex_format
*/
int ex_format(NMLTYPE type, void *buffer, CMS *cms)
{

	type = cms->check_type_info(type,buffer,"ex",
		(cms_symbol_lookup_function_t) 0,
		(const char **) 0,
		ex_id_list,ex_size_list,
		EX_NAME_LIST_LENGTH,
		0);

	switch(type)
	{
	case EXAMPLE_MSG_TYPE:
		((EXAMPLE_MSG *) buffer)->update(cms);
		break;

	default:
		return(0);
	}
	return 1;
}

/*
*	NML/CMS Update function for EXAMPLE_MSG
*	from nml_ex1.hh:0
*/
void EXAMPLE_MSG::update(CMS *cms)
{

	cms->beginClass("EXAMPLE_MSG","NMLmsg");
	cms->update_with_name("d",d);
	cms->update_with_name("f",f);
	cms->update_with_name("c",c);
	cms->update_with_name("s",s);
	cms->update_with_name("i",i);
	cms->update_with_name("l",l);
	cms->update_with_name("uc",uc);
	cms->update_with_name("us",us);
	cms->update_with_name("ui",ui);
	cms->update_with_name("ul",ul);
	cms->update_dla_length_with_name("da_length",da_length);
	cms->update_dla_with_name("da",da,da_length,20);

	cms->endClass("EXAMPLE_MSG","NMLmsg");

}

/*
*	Constructor for EXAMPLE_MSG
*	from nml_ex1.hh:0
*/
EXAMPLE_MSG::EXAMPLE_MSG()
	: NMLmsg(EXAMPLE_MSG_TYPE,sizeof(EXAMPLE_MSG))
{
	d = (double) 0;
	f = (float) 0;
	c = (char) 0;
	s = (short) 0;
	i = (int) 0;
	l = (long) 0;
	uc = (unsigned char) 0;
	us = (unsigned short) 0;
	ui = (unsigned int) 0;
	ul = (unsigned long) 0;
	da_length = (int) 0;
	for(int i_da=0; i_da< 20; i_da++)
	{
		((double*)da)[i_da]  = (double) 0;
	}

}

