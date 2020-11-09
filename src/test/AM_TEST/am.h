#pragma once

/*
此头文件用于声明NML消息类型，格式函数
*/


#include <nml.hh>

#define AM_CMD_TEST_1_TYPE 101

#define AM_STAT_TEST_1_TYPE 201

extern int amFormat(NMLTYPE type, void* buffer, CMS* cms);