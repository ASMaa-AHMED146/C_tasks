#include <stdio.h>
#include <stdlib.h>
int* sortup(int*ptr,int size)
{ int *x=ptr;
    for(int*q=ptr;q<=ptr+(size-1);q++)
    {
        x=q;
        for(int*p=q+1;p<=ptr+(size-1);p++)
        {
            if(*x<*p)
            {
                int temp=*x;
                *x=*p;
                *p=temp;
            }

        }

    }


 return ptr+1;
}

int main()
{printf("enter size of array:\n");
int size;
scanf("%d",&size);
int arr[size];
for(int i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}
int *res=sortup(arr,size);
printf("%d",*res);
 return 0;

}
