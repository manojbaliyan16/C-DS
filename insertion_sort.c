/* Insertion Sort */
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k,n,b,a[10];
   clrscr();
   printf("\n How many numbers U wanna enter to sort (<10) \n");
   scanf("%d",&n);
   printf("\n Enter the elements\n");
   for(i=0;i<=n-1;i++)
   {
   	scanf("%d",&a[i]);
   }
   printf("\n Elements b4 Sorting r:- \n");
   for(i=0;i<=n-1;i++)
   {
   	printf("\n%d",a[i]);
   }

   for(i=1;i<=n-1;i++)							/* Insertion sort*/
   {
   	for(j=0;j<=(i-1);j++)
      {
      	if(a[j]>a[i])
         {
            b=a[i];
         	for(k=i;k>=(j+1);k--)
            {
            	a[k]=a[k-1];
            }
            a[j]=b;
         }
      }
   }
   printf("\n Sorted Elements r:- \n");
   for(i=0;i<=n-1;i++)
   {
   	printf("\n%d",a[i]);
   }
   getch();
}


