#pragma once

/*
此文件用于NML消息类的声明
*/

#include <rcs.hh>

#include "am.h"

class AM_CMD_TEST_1 : public RCS_CMD_MSG
{
public:
	AM_CMD_TEST_1() : RCS_CMD_MSG(AM_CMD_TEST_1_TYPE, sizeof(AM_CMD_TEST_1)) {};

	void update(CMS* cms);

	char c;
	double d;
};

class AM_STAT_TEST_1 : public RCS_STAT_MSG
{
public:
	AM_STAT_TEST_1() : RCS_STAT_MSG(AM_STAT_TEST_1_TYPE, sizeof(AM_STAT_TEST_1)) {};

	void update(CMS* cms);

	bool b;
	double d;
};