#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
int x=1,y=2,z=3;
int *px=&x,*py=&y,*pz=&z;
printf("%d %d %d\n%p %p %p\n %d %d %d\n",x,y,z,px,py,pz,*px,*py,*pz);
printf("swaping pointers");
pz=px;
px=py;
py=pz;
printf("%d %d %d\n %p %p %p\n %d %d %d\n",x,y,z,px,py,pz,*px,*py,*pz);

 return 0;

}
