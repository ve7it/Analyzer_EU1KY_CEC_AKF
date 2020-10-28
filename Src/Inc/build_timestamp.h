#ifndef BUILD_TIMESTAMP 
#warning GIT failed. Using build time/date not repository time/date 
#define HGREV N/A 
#define BUILD_TIMESTAMP_US "28/10/2020 4:25 PM"
#define BUILD_TIMESTAMP_D "28/10/2020 4:25 PM"
#define HGREVSTR(s) stringify_(s) 
#define stringify_(s) #s 
#endif 
