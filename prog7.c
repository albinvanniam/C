#include<stdio.h>
void main()
{int x,r,l,b,s,base,h;
float ans;
printf("1.)Rectangle\n2.)Circle\n3.)Triangle \n4.)Square");
printf("\nEnter your choice:");
scanf("%d",&x);
switch(x)
{
case 1:
printf("\nEnter length and breadth:");
scanf("%d""%d",&l,&b);
ans=l*b;
printf("\nAnswer is:%f",ans);
break;
case 2:
printf("\nEnter the radius:");
scanf("%d",&r);
ans=3.14*r*r;
printf("\nAnswer is:%f",ans);
break;
case 3:
printf("\nEnter base and height:");
scanf("%d""%d",&base,&h);
ans=0.5*base*h;
printf("\nAnswer is:%f",ans);
break;
case 4:
printf("\nEnter the side:");
scanf("%d",&s);
ans=s*s;
printf("\nAnswer is:%f",ans);
break;
default:
{printf("INVALID OPTION!!");
}
}
}
