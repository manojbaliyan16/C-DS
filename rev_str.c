/* Reverse of a String using Stack*/
#include<stdio.h>
#include<conio.h>

void main()
{
	char word[15],stack[15];
	int i,top=-1;
	printf("\n enter the string \n");
	scanf("%s",&word);
	printf("string is:\n %s",word);
	for(i=0;word[i]!='\0';i++)
	{
		top++;
		stack[top]=word[i];
	}
	printf("\n Reverse is:\n");
	for(i=top;i>=0;i--)
	{
		printf("%c",stack[i]);
	}
	getch();
}
