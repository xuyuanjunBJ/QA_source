#include <stdio.h>
#include <math.h>
int main()
{
    char *p=NULL;
int i=0;
 //   p=(char*)malloc(512*1024*1024);
    p=(char*)malloc(500*1024*1024);
//    for(i=0;i<512*1024*1024 && p !=NULL ;i++,p++)
    for(i=0;i<500*1024*1024 && p !=NULL ;i++,p++)
        *p=2*4;
        sleep(500);
   add this line to test
}
