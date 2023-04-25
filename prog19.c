#include<stdio.h>
#include<string.h>
struct stud
{
	char name[40];
	int rno;
	int m[5];
	int sum;
}s[100];

void main()
{
        char con;
	int p,count,i,j,n,small,high,q,ch,c;
do
{	
        printf("\nEnter the no of students\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the name:\n");
		scanf("%s",s[i].name);
		printf("\n Enter the marks out of 50:\n");
		for(j=0;j<5;j++)
		{
		scanf("%d",&s[i].m[j]);

		}
	}


printf("MENU\n1.Failures\n2.Class topper\n3.Subject topper\n");
scanf("%d",&c);
if(c==1)
{
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<5;j++)
	{
	if(s[i].m[j]<25)
	{
	count++;
	}

	}
	if(count>2)
	{
		puts(s[i].name);
		printf(" FAILED in more than 2 subjects!\n");
	}
	}
}
if(c==2)
{
	small=s[0].m[0];
	for(i=0;i<n;i++)
	{
		for(j=0;j<5;j++)
		{
			s[i].sum+=s[i].m[j];

		}

	}
	high=s[0].sum;
	for(i=0;i<n;i++)
	{
		if(high<=s[i].sum)
		{
			high =s[i].sum;

			p=i;
		}
          
	}
	printf("\nClass topper is :");
	puts(s[p].name);
}
if(c==3)
{
	for(j=0;j<5;j++)  //to print subject topper
	{
		small=s[0].m[j];
		for(i=0;i<n;i++)
		{

			if(small<=s[i].m[j])
			{
				small=s[i].m[j];
				q=i;
				
			}
                   
		}
		printf("\n%dsubject topper :",j+1);
		puts(s[q].name);

	}
        
}
printf("Do u want to continue\n");
	scanf("%s",&con);
}while(con=='y'||con=='Y');
}
