#include <stdio.h>
#include <stdlib.h>
void login(int num)
{
   int a=0,b=1,res=0;
   for(int i=0;i<num;i++)
   {printf("%d\t",a);
       res=a+b;
       a=b;
       b=res;

   }

}
int main()
{int num;
 scanf("%d",&num);
     login(num);

    return 0;
}
