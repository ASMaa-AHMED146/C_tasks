#include <stdio.h>
#include <stdlib.h>

int main()
{
     printf("enter ten number\n");
 float sum=0,num;
  for(int i=0;i<10;i++)
  {
      scanf("%f",&num);
      sum=sum+num;
  }
  printf("\nsum=%f",sum);
  printf("\naverage=%f",sum/10);
    return 0;
}
