#include<stdio.h>
#include<conio.h>
#define SIZE 10
void quicksort(int a[],int low,int up);
int parti(int a[],int low,int up);


void main()
{
	int i,n,a[SIZE];
   clrscr();
   printf("\n Enter how many numbers U wanna sort(<10)\n");
   scanf("%d",&n);
   printf("\n Enter the numbers\n");
   for(i=0;i<=n-1;i++)
   {
   	scanf("%d",&a[i]);
   }
   printf("\n Numbers in the array are:-\n");
   for(i=0;i<=(n-1);i++)
   {
   	printf("\n%d",a[i]);
   }
   quicksort(a,0,n-1);
   printf("\n Sorted numbers are:-\n");
   for(i=0;i<=(n-1);i++)
   {
   	printf("\n%d",a[i]);
   }
   getch();
}

int parti(int a[],int low,int up)
{
int i,j,temp,pivot;
i=low+1;
j=up;
pivot=a[low];
while(i<=j)
{
	while((a[i] < pivot) && (i<up))
   {
   	i++;
   }
   while(a[j] > pivot)
   {
   	j--;
   }
   if(i<j)
   {
   	temp=a[i];
      a[i]=a[j];
      a[j]=temp;
      i++;
      j--;
   }
   else
   {i++;}
}
a[low]=a[j];
a[j]=pivot;
return j;
}


void quicksort(int a[],int low, int up)
{
int pivloc;
if(low>=up)
{
return;
}
pivloc=parti(a,low,up);
quicksort(a,low,pivloc-1); /* sorting & processing of left sub -array */
quicksort(a,pivloc+1,up);  /* ------------------------ryt sub array*/

}
