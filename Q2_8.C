#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter number\n");
 int mul=1,num;
 scanf("%d",&num);
  for(int i=1;i<=12;i++)
  {
      printf("%d*%d=%d\n",num,i,num*i);
  }
    return 0;
}
