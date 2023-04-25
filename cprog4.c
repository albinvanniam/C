#include<stdio.h>
void main()
{
float u,a,t,d;
printf("Enter the value of initial veocity ");
scanf("%f",&u);
printf("Enter the value of accelaration:");
scanf("%f",&a);
printf("Enter the time interval:");
scanf("%f",&t);
d=(u*t)+(0.5*a*t*t);
printf("Distance=%f",d);
}
