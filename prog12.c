#include<stdio.h>
void main()
{int flag,a,b,j;
printf("Enter the lower limit:");
scanf("%d",&a);
printf("\nEnter the upper limit:");
scanf("%d",&b);
for(int i=a;i<b+1;i++)
 {flag=0;
  for(j=2;j<i;j++)
  {if(i%j==0)
   {flag=1;
    break;
   }
  }
if(flag==0)
printf("%d\n",j);
}
}
