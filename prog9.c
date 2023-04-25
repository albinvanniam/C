#include<stdio.h>
void main()
{int y,n,r,rev=0;
printf("Enter the number:");
scanf("%d",&n);
y=n;
while(n>0)
{
r=n%10;
rev=rev*10+r;
n=n/10;
}
printf("\tThe reversed number is:%d",rev);
if(y==rev)
{printf("\tThe given number is pallindrome.");
}
else
printf("\n\tThe given number is not palindrome.");
}
