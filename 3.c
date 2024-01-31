#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter maney (dollars and cents) :\n");
    float num;
    scanf("%f",&num);
    printf("%.5f",(num+num*.005));
    return 0;
}
