#include<stdio.h>
void main()
{int n,i=2,flag=0;
printf("Enter the number:");
scanf("%d",&n);
while(i<n)
{if (n%i==0)
 {flag=1;
 break;
 }
i++;
}
if(flag==1)
printf("The given number is not Prime.");
else
printf("The given number is  prime");
}

