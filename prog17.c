#include<stdio.h>
void main()
{int l,i,a[10],c,b,new,d,t;
 
 printf("\nenterthe size\n ");
 scanf("%d",&l); 
 printf("\n the enter the nos\n");
 for (i=0;i<=l;i++)
{
scanf("%d",&a[i]);
}
label:printf("\nMENU\n1.INSERTION\n2.DELETION\n3.DISPALY\n");
     scanf("%d",&c);
   switch(c)
  {

  case 1:printf("\nenter the position of new no: to be entered\n");
       scanf("%d",&b);
       printf("\nenter the new no:\n");
       scanf("%d",&new);
       for(i=l;i>=b;i--)
       { a[i+1]=a[i];
       
        }
      a[b]=new;
      for (i=0;i<=l;i++)
        {
       printf("%d\t",a[i]);
         }
       break;
case 2:printf("\nenter the position of no: to be deleted\n");
      scanf("%d",&d);
       for(i=d;i<l+1;i++)
       {
        
         a[i]=a[i+1];
       
        }

      for (i=0;i<=l;i++)
        {
       printf("%d\t",a[i]);
         }
       break;
case 3:for (i=0;i<=l;i++)
        {
       printf("%d\t",a[i]);
         }
       break;
case 4:break;

default:goto label;


}

 }
