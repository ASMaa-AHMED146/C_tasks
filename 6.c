#include <stdio.h>
#include <stdlib.h>

int main()
{  int a,b;
   scanf("%d%d",&a,&b);
    printf("\n%d\t%d\t%d\t%d\n-----------------------",a+b,a-b,a/b,a*b);
    printf("\n%d\t%d\t%d\t%d%d\t\n-----------------------",a^b,a|b,a&b,a>>1,a<<1);
    printf("\n%d\t%d\t%d\t%d\n-----------------------",a||b,a&&b,!a,!b);
    return 0;
}
