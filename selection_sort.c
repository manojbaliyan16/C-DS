/* Selection sort */
#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,j,b,arr[10];
   printf("\n How many elements U wanna sort?(less than 10)\n");
   scanf("%d",&n);
   printf("\n Enter the numbers\n");
   for(i=0;i<=n-1;i++)
   {
   	scanf("%d",&arr[i]);
   }
   printf("\n Numbers in the array are as follows:- \n");
   for(i=0;i<=(n-1);i++)
   {
   	printf("\n%d",arr[i]);
   }

   for(i=0;i<=(n-2);i++)
   {
   	for(j=i+1;j<=(n-1);j++)
      {
      	if(arr[i]>arr[j])
         {
         	b=arr[i];
            arr[i]=arr[j];
            arr[j]=b;
         }
      }
   }

   printf("\n Sorted numbers are:\n");
   for(i=0;i<=(n-1);i++)
   {
   printf("\n %d",arr[i]);
   }
   getch();
}

