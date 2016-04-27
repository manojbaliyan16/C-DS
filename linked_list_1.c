/* Linked List concept*/
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
void insert_at_end()
{
struct node *current;
current = (struct node *)malloc(sizeof(struct node));
if(current!=NULL)
{
int n;
printf("\n enter the number at the end of Linked List\n");
scanf("%d",&n);
current->num=n;
if(start==NULL)
{
start=current;
end=current;
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
printf("\n No memory\n");
}
}
void insert_at_specified()
{
struct node *current;
current = (struct node *)malloc(sizeof(struct node));
if(current!=NULL)
{
int i,n,p;
struct node *prev,*pos; /* pos points to specified node */
printf("\nenter the number\n");
scanf("%d",&n);
current->num=n;
printf("\n enter the specified position where U want to insert\n");
scanf("%d",&p);
prev=start;
for(i=1;i<=(p-2);i++)
	{
	prev=prev->next;
   }
pos=prev->next;
prev->next=current;
current->next=pos;
}
else
{
printf("\n NO MEMORY \n");
}
}

void del_at_begin()
{
if(start!=NULL)
{
struct node *pos;
int n;
n=start->num;
printf("\n Number is deleted from Linked List=%d\n",n);
pos=start;
if(start!=end)
{
start=start->next;
}
else
{
start=end=NULL;
}
free(pos);
}
else
{
printf("\n No node to delete in Linked List\n");
}
}

void del_at_end()
{
if(end!=NULL)
{
struct node *pos;
int n;
n=end->num;
printf("\n number is deleted from Linked List=%d",n);
pos=end;
if(start!=end)
{
struct node *prev;
prev=start;
while((prev->next)!=end)
{
prev=prev->next;
}
end=prev;
end->next=NULL;
}
else
{
start=end=NULL;
}
free(pos);
}
else
{
printf("\n No Linked List to print \n");
}
}

void del_at_specified()
{
if(start!=NULL)
{
struct node *prev=start,*pos;
int n,p,i;
printf("\n enter the postion of node U want to delete \n");
scanf("%d",&p);
for(i=1;i<=(p-2);i++)
{
prev=prev->next;
}
 pos=prev->next;
 n=pos->num;
 printf("\n number is deleted from %d position=%d",p,n);
 prev->next=pos->next;
 free(pos);
 }
 else
 {
 printf("\n Linked List is Empty\n");
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

void main()
{
int ch;
do
{
printf("\n 1 to insert\n");
printf("\n 2 to traverse\n");
printf("\n 3 to insert at end \n");
printf("\n 4 to insert at Specified Position\n");
printf("\n 5 to delete from Begin\n");
printf("\n 6 to delete from end\n");
printf("\n 7 to delete from Specified Position\n");
printf("\n 8 to exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:  insert_at_begin();
			break;
case 2:  traverse();
			break;
case 3:  insert_at_end();
			break;
case 4:  insert_at_specified();
			break;
case 5:  del_at_begin();
			break;
case 6: 	del_at_end();
			break;
case 7: del_at_specified();
			break;
case 8: exit(0);
			break;
default: printf("WRONG CHOICE");
}
printf("\n enter 0 to continue\n");
scanf("%d",&ch);
}
while(ch==0);
}

