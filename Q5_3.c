#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int* mul(int *a,int *b,int res[])
{
    for(int i=0;i<5;i++)
    {
         res[i]=*(a+i)* *(b+i);
    }
    return res;
}
int main()
{
int a[5]={1,4,5,8,7},c[5]={4,7,6,4,2};
int res[5];
int *p=mul(a,c,res);
for(;p<&res[5];p++)
{
    printf("%d\n",*p);
}
 return 0;

}
