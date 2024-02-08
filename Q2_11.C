#include <stdio.h>
#include <stdlib.h>

int main()
{printf("enter number");
 int n;
 scanf("%d",&n);
 for(int j=1;j<=n;j++)
 {
     for(int i=1;i<=2*n-1;i++)
     {
         if(i>=n-(j-1)&&i<=n+(j-1))
         {
             printf("*");
         }
         else
            {
               printf(" ");
            }
     }
     printf("\n");
 }

    return 0;
}
