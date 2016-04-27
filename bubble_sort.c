/* Bubble Sort */
#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,j,arr[10],n,temp;
   clrscr();
   printf("\n How many elements you wanna store in array\n");
   scanf("%d",&n);
   printf("\n Enter the numbers\n");
   for(i=0;i<=n-1;i++)
   {
   	scanf("%d",&arr[i]);
   }
   printf("\n Numbers in the array are as follows:- \n");
   for(i=0;i<=n-1;i++)
   {
   	printf("\n%d",arr[i]);
   }

   for(i=1;i<(n-1);i++)      /* this loop for number of swaps*/
   {
		for(j=0;j<=(n-1-i);j++)    /* this loop for internal comparisons*/
      {
      	if(arr[j]>arr[j+1])    /* for swapping with adjacent number*/
         {
         	temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
         }
      }
   }
   printf("\n Sorted numbers are:");
   for(i=0;i<=(n-1);i++)
   {
   printf("\n %d",arr[i]);
   }
   getch();
   }
