#include<stdio.h>
void main()
{int n1,n2,m;
float ans;
char y;
do
{
printf("MENU\n1.)Addition\n2.)Subtraction\n3.)Divide\n4.)Multiplication");
printf("\nEnter two numbers:");
scanf("%d""%d",&n1,&n2);
printf("\nEnter your choice");
scanf("%d",&m);
switch(m)
{
case 1:
ans=n1+n2;
printf("\nSum=%f",ans);
break;
case 2:
ans=n1-n2;
printf("\nAnswer is:%f",ans);
break;
case 3:
ans=n1/n2;
printf("\nAnswer is:%f",ans);
break;
case 4:
ans=n1*n2;
printf("\nAnswer is:%f",ans);
break;
default:
printf("Invalid Choice!!");
break;
}
printf("Do you want to continue?");
scanf("%c",&y);
}while(y=='y');
}
 
 
