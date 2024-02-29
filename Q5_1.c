#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{


int x=10;
printf("%d\n",x);
int *p=&x;
*p=20;
printf("%d",*p);

 return 0;

}
