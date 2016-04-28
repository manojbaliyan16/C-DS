/* Circular Linked List concept*/
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
}
else
{
current->next=start;
}
start=current;
end->next=start;
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
struct node *pos=start;
printf("\n elements in Circular Linked List are: \n");
while((pos->next)!=start)
{
printf(" %d",pos->num);
pos=pos->next;
}
printf(" %d",pos->num);
}
else
{
printf("\n NO node to traverse\n");
}
}

void insert_at_end()
{
struct node *current;
current =(struct node *)malloc(sizeof(struct node));
if(current!=NULL)
{
int n;
printf("\n enter the number at the end of Circular Linked List\n");
scanf("%d",&n);
current->num=n;
if(start!=end)
{
end->next=current;
end=current;
end->next=start;
}
else
{
start=current;
end=current;
end->next=start;
}
}
else
{
printf("\n No node to traverse in Circular Linked lIst\n");
}
}

void del_at_begin()
{
if(start!=NULL)
{
struct node *pos;
int n;
n=start->num;
printf("number %d is deleted from Circular Linked List ",n);
pos=start;
if(start!=end)
{
start=start->next;
end->next=start;
}
else
{
start=end=NULL;
}
free(pos);
}
else
{
printf("\n No node to in Circular Linked List to delete \n");
}
}

void del_at_end()
{
if(start!=NULL)
{
struct node *pos;
int n;
n=end->num;
printf("\n Number %d is deleted from Circular Linked List\n",n);
pos=end;
if(start!=end)
{
struct node *prev=start;
while((prev->next)!=end)
{
prev=prev->next;
}
end=prev;
end->next=start;
}
else
{
start=end=NULL;
}
free(pos);
}
else
{
printf(" Circular Linked List\n");
}
}



void main()
{
int ch;
do
{
printf("\n 1 to insert at begin of Circular Linked List \n");
printf("\n 2 to traverse the Circular Linked List\n");
printf("\n 3 to insert at End of Circular Linked List \n");
printf("\n 4 to delete at begin of Circular Linked List\n");
printf("\n 5 to delete at End of Circular Linked List\n");
printf("\n 6 to exit \n");
scanf("%d",&ch);
switch(ch)
{
case 1:  insert_at_begin();
			break;
case 2:  traverse();
			break;
case 3: insert_at_end();
			break;
case 4: del_at_begin();
			break;
case 5: del_at_end();
			break;
case 6: exit(0);
			break;
default: printf("WRONG CHOICE");
}
printf("\n enter 0 to continue\n");
scanf("%d",&ch);
}
while(ch==0);
}


