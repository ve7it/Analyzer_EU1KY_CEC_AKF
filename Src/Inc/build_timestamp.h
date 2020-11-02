#ifndef BUILD_TIMESTAMP 
#warning GIT failed. Using build time/date not repository time/date 
#define HGREV N/A 
#define BUILD_TIMESTAMP_US "01/11/2020 5:09 PM"
#define BUILD_TIMESTAMP_D "01/11/2020 5:09 PM"
#define HGREVSTR(s) stringify_(s) 
#define stringify_(s) #s 
#endif 
