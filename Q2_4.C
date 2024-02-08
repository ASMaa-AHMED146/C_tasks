#include <stdio.h>
#include <stdlib.h>

int main()
{ float res;
    scanf("%f",&res);
    if(res>=85)
    printf("EXLLENT");
    else if(res>=75)
    printf("VERY GOOD");
    else if(res>=65)
    printf("GOOD");
    else if(res>=50)
    printf("ACCEPT");
     else
    printf("FAILED");

    return 0;
}
