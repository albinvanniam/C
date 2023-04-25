#include<stdio.h>
void main()
{int n,y,r,x,sum=0;
printf("Enter the number");
scanf("%d",&n);
y=n;
while(n>0)
{r=n%10;
x=r*r*r;
sum=sum+x;
n=n/10;
}
if(y==sum)
printf("\nThe given number is armstrong");
else
printf("\nThe given number is not armstrong.");
}
