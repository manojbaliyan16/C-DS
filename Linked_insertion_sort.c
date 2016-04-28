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
   current=(struct node *)malloc(sizeof(struct node));
   if(current!=NULL)
   {
   	int n;
      printf("\n enter the number\n");
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
   	printf("\n NOT ENOUGH MEmory\n ---->>  <<-------- |__|");
   }
}


void traverse()
{
   if(start!=NULL)
   {
	struct node *pos=start;
   printf("\n Elements in Linked List are \n");
   while(pos!=NULL)
   {
   	printf(" %d ",pos->num);
      pos=pos->next;
   }
   }
   else
   {
   printf("\n No nodes in LInked List to Traverse\n");
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

void sort()
{
	struct node *pos,*nxt;
   int i,j,c1,ctr,temp;
   ctr=counter(c1);
   pos=start;
   nxt=pos->next;
   for(i=1;i<=(ctr-1);i++)
   {
   	for(j=0;j<=(i-1);j++)
      {
      	if((pos->num) > (nxt->num))
         {
         	temp=pos->num;
            pos->num=nxt->num;
            nxt->num=temp;
         }
      pos=pos->next;
      }
      pos=start;
      nxt=nxt->next;
   }
   traverse();
}









void main()
{
	int ch;
   do
   {
   	printf("\n Press -1 to Enter\n");
      printf("\n Press -2 to Traverse\n");
      printf("\n Press -3 to Sortt\n");
      printf("\n Press -4 to EXIT\n");
      scanf("%d",&ch);
      switch(ch)
      {
      	case 1: insert_at_end();
         			break;
         case 2:	traverse();
         			break;
         case 3: sort();
         			break;
         case 4: exit(0);
         			break;
         default: printf("\n Wrong Choice\n");
      }
      printf("\n Press 0 to continue\n");
      scanf("%d",&ch);
   }
   while(ch==0);
}









