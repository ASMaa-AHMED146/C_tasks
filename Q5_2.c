#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Sum(int *a,int *b)
{
    int sum=*a+*b;
    return sum;
}
int main()
{
int a,b;
scanf("%d%d",&a,&b);
printf("sum is:%d",Sum(&a,&b));

 return 0;

}
