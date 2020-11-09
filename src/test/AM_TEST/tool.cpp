#include "tool.h"

std::string GetExePath()
{
    char szFilePath[MAX_PATH + 1] = { 0 };
    GetModuleFileNameA(NULL, szFilePath, MAX_PATH);
    (strrchr(szFilePath, '\\'))[0] = 0; // 删除文件名，只获得路径字串  
    std::string path = szFilePath;

    return path;
}