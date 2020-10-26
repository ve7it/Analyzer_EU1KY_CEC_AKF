#ifndef BUILD_TIMESTAMP 
#warning GIT failed. Repository not found. Firmware revision will not be generated. 
#define HGREV N/A 
#define BUILD_TIMESTAMP_US "-~-2-~-2 ~-2:~-2 UT"
#define BUILD_TIMESTAMP_D "~-2-~-2- ~-2:~-2 UT"
#define HGREVSTR(s) stringify_(s) 
#define stringify_(s) #s 
#endif 
