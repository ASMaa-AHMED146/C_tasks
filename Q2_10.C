#include <stdio.h>
#include <stdlib.h>

int main()
{printf("enter ID");
 int ID=123456,password=5555;
 int num,x;
 scanf("%d",&num);
 if(ID==num)
 {
     printf("enter password:");
     scanf("%d",&x);
     if(x==password)
     {
         printf("WELCOME");
     }
     else
        {
                    for(int i=0 ;i<3;i++)
                {
                     printf("try again:");
                     scanf("%d",&x);

                          if(x==password)
                         {
                             printf("WELCOME");
                             return 0;
                         }

                 }
                printf("No more tryes");
            }

 }
    return 0;
}
