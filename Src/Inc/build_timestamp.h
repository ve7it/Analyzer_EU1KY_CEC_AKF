#ifndef BUILD_TIMESTAMP 
#warning GIT failed. Using build time/date not repository time/date 
#define HGREV N/A 
#define BUILD_TIMESTAMP_US "14/11/2020 1:40 PM"
#define BUILD_TIMESTAMP_D "14/11/2020 1:40 PM"
#define HGREVSTR(s) stringify_(s) 
#define stringify_(s) #s 
#endif 
