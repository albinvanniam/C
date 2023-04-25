#include<stdio.h>
void main()
{
	int a[100][100],b[100][100],y[100][100],d=0,r,c,rs=0,cs=0,ch,x;
	printf("Enter the no of rows and columns:");
	scanf("%d%d",&r,&c);
	printf("Enter the elements of array.");	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<r;i++)
	{
		printf("\n");	
		for(int j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	printf("\n1.Matrix Addition\n2.Transpose\n3.Diagonals sum\nEnter the option:");
	scanf("%d",&ch);
	if(ch==3)
	{
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				if(i==j)
				{
					d+=a[i][j];
				}
			}
		}
		printf("\nThe diagonals sum is %d",d);		
	}
	else if(ch==1)
	{
		printf("Enter the elements of 2nd array.");	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
			y[i][j]=a[i][j]+b[i][j];
		}		
        }
      for(int i=0;i<r;i++)
	{printf("\n");
		for(int j=0;j<c;j++)
		 {printf("%d\t",y[i][j]);
		 }
	}}
	else
	{
		int t[r][c];
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				t[i][j]=a[j][i];
			}
		}
		printf("The transpose is \n");
		for(int i=0;i<r;i++)
		{	
			printf("\n");			
			for(int j=0;j<c;j++)
			{ 
 				printf("%d\t",t[i][j]);

			}
		}

	}
}
