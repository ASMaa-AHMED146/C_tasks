#include <stdio.h>
#include <stdlib.h>

int main()
{
int arr[5][5],sum=0;
int*p=arr;
for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}


for(int i=0;i<5;i++)
{  sum=0;
    for(int j=0;j<5;j++)
    {
        sum+=arr[i][j];
    }
    printf("%d\t",sum);
}
 printf("\n");

for(int i=0;i<5;i++)
{  sum=0;
    for(int j=0;j<5;j++)
    {
        sum+=arr[j][i];
    }
    printf("%d\t",sum);
}

 return 0;

}
