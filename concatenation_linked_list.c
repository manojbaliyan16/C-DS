/*  Concatination of Linked List */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node {
				int num;
            struct node *next;
            };
struct node *start=NULL;

struct node *insert(struct node *start,int n)
{
	struct node *current,*pos;
	current=(struct node *)malloc(sizeof(struct node));
   printf("\n Enter the number\n");
   scanf("%d",&n);
   current->num=n;
   if(start==NULL)
   {
   current->next=NULL;
   start=current;
   }
   else
   {
   pos=start;
   while(pos->next!=NULL)
   	pos=pos->next;
      pos->next=current;
      current->next=NULL;
   }
   return start;

}



void traverse(struct node *start)
{
   if(start!=NULL)
   {
	struct node *pos;
   pos=start;
   /*printf("\n -------- Elements in Linked List are------- \n");   */
   while(pos!=NULL)
   {
   	printf(" %d",pos->num);
      pos=pos->next;
   }
   }
   else
   {
   printf("\n ******* LInked LIst is Empty*********\n");
   }
}


struct node *concat(struct node *start1,struct node *start2)
{
   struct node *pos=start1;
	if(start1==NULL)
   {
   	start1=start2;
      return start1;
   }
   if(start2==NULL)
   {
   	return start1;
   }
   while(pos->next!=NULL)
   	pos=pos->next;
      pos->next=start2;
      return start1;
}






void main()
{
int ch,n1,n2;
struct node *start1=NULL,*start2=NULL;
char choice,choice2;
do
{
printf("\n ^^^^Enter-1 for selecting Linked List number-1\n");
printf("\n ^^^^Enter-2 for selecting Linked List number-2\n");
printf("\n ~~~~Enter-3 to print both the Linked Lists~~~~\n");
printf("\n ~~~~Enter-4 to concat both the Linked Lists~~~~\n");
printf("\n ^^^^Enter 5 to Exit\n");
scanf("%d",&ch);
switch(ch)
{
	case 1:  printf("\n 1\n");
            {
   			do
   			{
				printf("\n Press -a to insert in Linked List-1\n");
            printf("\n Press -s to traverse the Linked List-1\n");
            printf("\n Press -d to exit from Linked List-1\n");
				scanf(" %c",&choice);
            switch(choice)
            	{
               	case 'a':	start1=insert(start1,n1);
                          		break;
                  case 's':	traverse(start1);
                  				break;
                  case 'd': 	exit(0);
                  				break;
                  default:		printf("\n NO such Choice is available in LInked List-1\n");
               }
            printf("\n ^&^&^& ENter o to continue with operations related to Linked List-1\n");

            scanf(" %c",&choice);
            }
            while(choice=='o');
            }
            break;

   case 2:	printf("\n 2\n");
   			{
            do
            {
            printf("\n Press -z to insert in Linked List-2\n");
            printf("\n Press -x to traverse the Linked List-2\n");
            printf("\n Press -c to exit from Linked List-2\n");
				scanf(" %c",&choice2);
            switch(choice2)
            	{
               	case 'z':	start2=insert(start2,n2);
                          		break;
                  case 'x':	traverse(start2);
                  				break;
                  case 'c': 	exit(0);
                  				break;
                  default:		printf("\n NO such Choice is available in LInked List-2\n");
               }
            printf("\n ^&^&^& ENter p to continue with operations related to Linked List-1\n");
            scanf(" %c",&choice2);
            }
            while(choice2=='p');
            }
            break;

   case 3:	printf("\n Elements in Linked List-1 r :- \n");
   			traverse(start1);
            printf("\n Elements in Linked List-2 r :- \n");
            traverse(start2);
            break;

   case 4:	start1=concat(start1,start2);
   			traverse(start1);
            break;
   case 5:	exit(0);
   			break;

   default:	printf("\n WRONG CHOICE\n");
}
printf("\n enter 0 to continue\n");
scanf("%d",&ch);
}
while(ch==0);
}

















