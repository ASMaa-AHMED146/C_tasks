#include <stdio.h>
#include <stdlib.h>

int main()
{printf("enter number\n");
 int mul=1,num;
 scanf("%d",&num);
  while(num!=0)
  {
      mul=mul*num;
      num--;
  }
  printf("%d",mul);
    return 0;
}
