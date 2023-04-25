#include<stdio.h>
#include<string.h>
void main()
{char str[20][20],search[30],nword[30];
int n,i;
printf("Enter the number of words:");
scanf("%d",&n);
printf("Enter the string:");
for(i=0;i<n;i++)
{scanf("%s",str[i]);
}
printf("Enter the word to be replaced:");
scanf("%s",search);

for(i=0;i<n;i++)
{if (strcmp(str[i],search)==0)
{printf("Enter the new word:");
scanf("%s",nword);
strcpy(str[i],nword);
}
}
for(i=0;i<n;i++)
{printf("%s ",str[i]);
}
}

