#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h;
    scanf("%f",&h);
    float res=1000;
    if(h<40)
    {
        printf("%.2f",(res*(.1)));
    }
    else{ printf("%.2f",res);}
    return 0;
}
