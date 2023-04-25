#include<stdio.h>
void main()
{
int a[10],n,i,x,flag=0;
int *ap;
ap=&a[0];
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;++i)
{
scanf("%d",&a[i]);
}
printf("Enter the element to be searched for:");
scanf("%d",&x);
for(i=0;i<n;++i)
{
if(*(ap+i)==x)
 {
  flag=1;
}
}
if(flag==1)
{
printf("Element is present");
}
else
{
printf("Element is not present");
}
}



