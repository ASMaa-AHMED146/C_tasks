#include <stdio.h>
#include <stdlib.h>
void sortup(int*ptr,int size)
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

    for(int*q=ptr;q<=ptr+(size-1);q++)
    {
        printf("%d",*q);
    }


}

void sortdown(int*ptr,int size)
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
{printf("enter size of array:\n");
int size;
scanf("%d",&size);
int arr[size];
for(int i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}
int c ;
printf("enter your choice (0,1):\n");
scanf("%d",&c);

switch(c)
    {
    case 1:
       sortup(arr,size);
       break;
       case 0:
        sortdown(arr,size);
       break;


    }


 return 0;

}
