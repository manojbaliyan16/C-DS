#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int num;
   struct node *next;
};
struct node *start=NULL,*end=NULL;

void insert_at_begin()
{
struct node *current;
current= (struct node *)malloc(sizeof(struct node));
if(current!=NULL)
{
int n;
printf("\n enter the number\n");
scanf("%d",&n);
current->num=n;
if(start==NULL)
{
end=current;
end->next=NULL;
}
else
{
current->next=start;
}
start=current;
}
else
{
printf("\n NO MEMORY \n");
}
}


void traverse()
{
if(start!=NULL)
{
struct node *pos;
pos=start;
printf("\n elements of Linked List are\n");
while(pos!=NULL)
{
printf(" %d",pos->num);
pos=pos->next;
}
printf("\n");
}
else
{
printf("\n Linked List is empty\n");
}
}

int counter(int c)     /* counter function is used to count number of nodes.
										c is a formal parameter */
{
		struct node *pos;
		c=0;
		pos=start;
		while(pos!=NULL)
      {
      	pos=pos->next;
			c=c+1;
		}
      return (c);
}


void sort()
{
	struct node *pos;
   struct node *nxt;
   int c1,i,j,temp,ctr;
   ctr= counter(c1);  /* c1 is actual parameter */
   printf("\n Number of nOdes are= %d",ctr);

   pos=start;
   nxt=pos->next;

   for(i=1;i<=(ctr-1);i++)
   {
      pos=start;
   	nxt=pos->next;
   	for(j=0;j<=(ctr-1-i);j++)
      {

         if((pos->num) > (nxt->num))
         {
         	temp=pos->num;
            pos->num=nxt->num;
            nxt->num=temp;
         }
         pos=pos->next;             /* to update pos & nxt pointer  */
         nxt=pos->next;
      }
   }
   
   printf("\n Sorted numbers r : \n");
   traverse();

}



void main()
{
int ch;
do
{
printf("\n 1 to insert\n");
printf("\n 2 to traverse\n");
printf("\n 3 to sort\n");
printf("\n 4 to exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:  insert_at_begin();
			break;
case 2:  traverse();
			break;
case 3:  sort();
			break;
case 4: exit(0);
			break;
default: printf("WRONG CHOICE");
}
printf("\n enter 0 to continue\n");
scanf("%d",&ch);
}
while(ch==0);
}

/* Bubble sort is data sensitive ,i.e minimum 1 and maximum (n-1) iterations. Hemce, time complexity is O(n). reverse sorted O(n^2).Random - O(n^2) */

