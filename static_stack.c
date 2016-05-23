/* Static Stack*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 4

int stack[size],top=-1; /* top has the index of top element */

void push()
{
if(top!=(size-1))
{
top++;
int n;
printf("\n enter the number\n");
scanf("%d",&n);
stack[top]=n;
}
else
{
printf("\n StackOverflow\n");
}
}

void traverse()
{
int i;
if(top!=-1)
{
printf("\n elements of Stack are: \n");
for(i=top;i>=0;i--)
{
printf(" %d",stack[i]);
}
}
else
{
printf("\n Stack is empty\n");
}
}

void main()
{
int ch;
do
{
printf("\n Press 1 to push the element in Stack\n");
printf("\n Press 2 to traverse the elements of Stack\n");
printf("\n Press 3 to exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1: push();
			break;
case 2: traverse();
			break;
case 3: exit(0);
			break;
default: printf("WRONG cHOICE");
}
printf("\n Press 0 to continue\n");
scanf("%d",&ch);
}
while(ch==0);
}




