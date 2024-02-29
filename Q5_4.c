#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sort(int*ptr,int size)
{ int *x=ptr;
    for(int*q=ptr;q<=ptr+(size-1);q++)
    {
        x=q;
        for(int*p=q+1;p<=ptr+(size-1);p++)
        {
            if(*x>*p)
            {
                int temp=*x;
                *x=*p;
                *p=temp;
            }

        }

    }

    for(int*q=ptr;q<=ptr+(size-1);q++)
    {
        printf("%d",*q);
    }


}

int main()
{
int arr[5],res[5];
printf("enter 5 numbers:");
for(int i=0;i<5;i++)
{
    scanf("%d",&arr[i]);
}
sort(arr,5);
 return 0;

}
