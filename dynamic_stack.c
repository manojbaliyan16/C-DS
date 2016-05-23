/* Dynamic Stack */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct stack {
	int num;
   struct stack *next;
   			};

            struct stack *top=NULL;

            void push()
            {
            struct stack *current;
            current= (struct stack *)malloc(sizeof(struct stack));
            if(current!=NULL)
            {
            int n;
            printf("\n enter the number\n");
            scanf("%d",&n);
            current->num=n;
            if(top==NULL)
            {
            current->next=NULL;
            top=current;
            }
            else
            {
             current->next=top;
             top=current;
            }
            }
            else
            {
            printf("\n NO MEMORY AVAILABLE \n");
            }
            }

            void traverse()
            {
            if(top!=NULL)
            {
            struct stack *pos=top;
            printf("\n elements of STACK are: \n");
            while(pos!=NULL)
            {
            printf("\n %d", pos->num);
            pos=pos->next;
            }
            printf("\n");
            }
            else
            {
            printf("\n STACK is Empty\n");
            }
            }



            void pop()
            {
            if(top!=NULL)
            {
            struct stack *pos=top;
            int n;
            n=pos->num;
            printf("Element %d is deleted from stack\n",n);
            if(top->next!=NULL)
            {
            top=top->next;
            }
            else
            {
            top=NULL;
            }

            free(pos);
            }
            else
            {
            printf("\n Stack UnderFlow\n");
            }
            }







            void main()
            {
            int ch;
            do
            {
            printf("\n Press-1 to Push element into Stack\n");
            printf("\n Press-2 to Traverse elements of Stack\n");
            printf("\n Press-3 to Pop elements from Stack\n");
            printf("\n Press-4 to Exit\n");
            scanf("%d",&ch);
            switch(ch)
            {
            case 1: push();
            			break;
            case 2: traverse();
            			break;
            case 3:  pop();
            			break;
            case 4: exit(0);
            			break;
            default: printf("\n WRONG CHOICE \n");
            }
            printf("\n Enter 0 to continue\n");
            scanf("%d",&ch);
            }
            while(ch==0);
            }






