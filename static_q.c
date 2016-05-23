/* Static Queue */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 10
int q[size],rear=-1,front=-1,num;

void enq()
{
	if(rear!=(size-1))
   {
   	if(front==-1)
      {
      	front=0;
         rear=0;
      }
      else
      {
      	rear++;
      }
      printf("\n Enter the number\n");
      scanf("%d",&num);
      q[rear]=num;
   }
   else
   {
   	printf("\n Queue is FULL\n");
   }
}

void traverse()
{
	if(front!=-1)
   {
      int i;
   	printf("\n Elements in Queue are : \n");
      for(i=front;i<=rear;i++)
      {
      	printf(" %d",q[i]);
      }
      printf("\n");
   }
   else
   {
   	printf("\n Queue is EMPTY\n");
   }
}

void deq()
{
	if(front!=-1)
   {
      num=q[front];
   	printf("\ndeleted element is %d\n",num);
      if(front==rear)
      {
      	front=rear=-1;
      }
      else
      {
      front++;
   	}
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










