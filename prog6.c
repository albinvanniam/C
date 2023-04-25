#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter three numbers:");
scanf("%d""%d""%d",&a,&b,&c);
if(a>b&&a>c)
{printf("\n%dis maximum\n",a);
if(b>c)
printf("\n%dis minimum\n",c);
else
printf("\n%dis minimun\n",b);
}
else if (b>c)
{printf("\n%dis maximum\n",b);
if(a>c)
printf("\n%dis minimum\n",c);
else
printf("\n%dis minimun\n",a);
}
else
{
printf("\n%dis maximum\n",c);
if(b>c)
printf("\n%dis minimum\n",b);
else
printf("\n%dis minimun\n",a);
}
}

 


