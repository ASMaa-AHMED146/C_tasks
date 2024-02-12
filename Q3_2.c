#include <stdio.h>
#include <stdlib.h>
int a=5, b=6;
#define swap() printf("before swap :%d%d\n",a,b);\
                int n=a;\
                a=b;\
                b=n;\
                printf("after swap :%d%d\n",a,b);


int main()
{
     swap();

    return 0;
}
