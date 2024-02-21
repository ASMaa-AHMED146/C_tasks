#include <stdio.h>
#include <stdlib.h>
void sortup(int ptr[],int size)
{
    int fre[100]={0};
    for(int i=0;i<size;i++)
    {
        int x=ptr[i];
        fre[x]++;
    }

    for(int i=0;i<100;i++)
    {
        if(fre[i]!=0)
        {
            printf("%d",i);

        }

    }



}

int main()
{printf("enter size of array:\n");
int size;
scanf("%d",&size);
int arr[size];
printf("enter numbers from 0 to 100:\n");
for(int i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}
sortup(arr,size);
 return 0;

}
