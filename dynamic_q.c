/* Dynamic Queue */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct q
	{
   int num;
   struct q *next;
	};
   struct q *front=NULL,*rear=NULL;

void enq()
{
	struct q *current;
   current = (struct q *)malloc(sizeof(struct q));
   if(current!=NULL)
   {
   	int n;
      printf("\n Enter the number \n");
      scanf("%d",&n);
      current->num=n;
      if(rear==NULL)
      {
      	front=current;
      }
      else
      {
      	rear->next=current;
      }
      rear=current;
      rear->next=NULL;
   }
   else
   {
   	printf("\n NO Memory Available\n");
   }
}


void traverse()
{
	if(front!=NULL)
   {
   	struct q *pos;
      pos=front;
      printf("\n Elements in Queue are : \n");
      while(pos!=NULL)
      {
      	printf(" %d",pos->num);
         pos=pos->next;
      }
      printf("\n");
   }
   else
   {
   	printf("\n Queue is Empty\n");
   }
}


void deq()
{
	if(front!=NULL)
   {
   	int num;
      struct q *pos;
      num=front->num;
   	printf("\n Dequeued element of Queue is %d\n",num);
      pos=front;
      if(front==rear)
      {
      	front=NULL;
         rear=NULL;
      }
      else
      {
      	front=front->next;
      }
      free(pos);
   }
   else
   {
   	printf("\n Queue is Empty\n");
   }
}


void main()
{
	int ch;
   do
   {
   	printf("\n Press 1 to Enqueue the elements\n");
      printf("\n Press 2 to Traverse the elements\n");
      printf("\n Press 3 to Dequeue the elements\n");
      printf("\n Press 4 to Exit\n");
   	scanf("%d",&ch);
      switch(ch)
      {
      	case 1: enq();
         			break;
         case 2: traverse();
         			break;
         case 3: deq();
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




