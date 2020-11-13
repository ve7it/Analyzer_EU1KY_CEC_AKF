#ifndef BUILD_TIMESTAMP 
#warning GIT failed. Using build time/date not repository time/date 
#define HGREV N/A 
#define BUILD_TIMESTAMP_US "12/11/2020 9:18 PM"
#define BUILD_TIMESTAMP_D "12/11/2020 9:18 PM"
#define HGREVSTR(s) stringify_(s) 
#define stringify_(s) #s 
#endif 
