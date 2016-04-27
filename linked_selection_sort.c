#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int num;
   struct node *next;
};

struct node *start=NULL,*end=NULL;

void insert_at_end()
{
	struct node *current;
   current= (struct node *)malloc(sizeof(struct node));
   if(current!=NULL)
   {
   	int n;
      printf("\n Enter the number\n");
      scanf("%d",&n);
      current->num=n;
      if(start==NULL)
      {
      	start=current;
      }
      else
      {
      	end->next=current;
      }
      end=current;
      end->next=NULL;

   }
   else
   {
		printf("\n NOT Enough Memory\n");
   }
}


void traverse()
{
	if(start!=NULL)
   {
		struct node *pos=start;
      printf("\n elements in Linked List are :\n");
      while(pos!=NULL)
      {
   		printf(" %d",pos->num);
         pos=pos->next;
      }
   }
   else
   {
		printf("\n Linked List is Empty\n");
   }
}

int counter(int c)
{
	struct node *pos=start;
   c=0;
   while(pos!=NULL)
   {
   	pos=pos->next;
      c=c+1;
   }
   return (c);
}

void sort()            /*In selection sort, select the element(generally the first) and compare it with consecutives, compare & swap them */
{
	struct node *pos,*nxt;
   int i,j,ctr,c1,temp;
   ctr=counter(c1);
   printf("\n Number of nodes r: %d",ctr);

   pos=start;
   nxt=pos->next;
   for(i=0;i<=(ctr-2);i++)
   {

      for(j=i+1;j<=(ctr-1);j++)
      {
      	if((pos->num) > (nxt->num))
         {
         	temp=pos->num;
            pos->num=nxt->num;
            nxt->num=temp;
         }
         nxt=nxt->next;
      }
      pos=pos->next;
      nxt=pos->next;
   }
   traverse();
}







void main()
{
int ch;
do
{
	printf("\n Enter 1 to insert\n");
   printf("\n Enter 2 to traverse\n");
   printf("\n Enter 3 to sort\n");
   printf("\n Enter 4 to exit\n");
   scanf("%d",&ch);
   switch(ch)
   {
		case 1:	insert_at_end();
      			break;
      case 2:	traverse();
      			break;
      case 3:  sort();
      			break;
      case 4:	exit(0);
      			break;
      default:	printf("\n Wrong Choice. Try Again\n");

   }
printf("\n enter 0 to continue\n");
scanf("%d",&ch);
}
while(ch==0);
}
/* Selection sort is data insensitive i.e It is unaffected if data is already sorted, reverse sorted or random.The no. of comparisons performed will be same.
	Hence, in all three cases Complexity is O(n^2). */


