#include<stdio.h>
#include<string.h>
struct student
{
char name[20];
int m1;
int m2;
int m3;
int m4;
int m5;
}s[10];
void main()
{int n,i,j;
float t;
printf("Enter the no. of students:");
scanf("%d",&n);
for(i=0;i<n;i++)
{printf("Enter the%dth student's name:",i+1);
scanf("%s",s[i].name);
printf("Enter the 5 marks:");
scanf("%d%d%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3,&s[i].m4,&s[i].m5);
}
for(i=0;i<n;i++)
{t=(s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5)/5;
printf("%dName:%s\n",i+1,s[i].name);
printf("Marks:\t%d\t%d\t%d\t%d\t%d\tAverage:%f\n",s[i].m1,s[i].m2,s[i].m3,s[i].m4,s[i].m5,t);
}
}

