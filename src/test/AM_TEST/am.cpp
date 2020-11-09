#include "am.h"
#include "am_nml.h"

int amFormat(NMLTYPE type, void* buffer, CMS* cms)
{
	switch (type)
	{
	case AM_CMD_TEST_1_TYPE:
		((AM_CMD_TEST_1*)buffer)->update(cms);
		break;
	case AM_STAT_TEST_1_TYPE:
		((AM_STAT_TEST_1*)buffer)->update(cms);
		break;
	default:
		break;
		return -1;
	}

	return (0);
}

void AM_CMD_TEST_1::update(CMS* cms)
{
	cms->update(c);
	cms->update(d);
}

void AM_STAT_TEST_1::update(CMS* cms)
{
	cms->update(b);
	cms->update(d);
}