#include <stdio.h>
#include <stdlib.h>
void dy()
{
   int num;
   scanf("%d",&num);
   int coun=0;
   while(num!=0)
   {
       num=num/10;
       coun++;
   }
   printf("\n%d",coun);
}
int main()
{
     dy();

    return 0;
}
