// A data file must be opened before processing it. either u write a program
// in C and enter the data to file from keyboard and then write another program
// to display on screen OR you can write instructions in the same program to
// display it.

// create a file to store text and display the contents

#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
   FILE *fptr;
   fptr=fopen("file_handling_1.c","w");
   if(!fptr)
   {
   	printf("\n Can't Open the File\n");
   }
   else
   {
   	printf("\n Enter the Text\n");
      printf("\n Press <ctrl+z> to terminate \n");
      while( (ch=getchar()) != EOF)
      {
      	putc(ch,fptr); // writes the character stored in "ch" variable to the
         					// file assocaaited with "fptr"
      }
      fclose(fptr);
 /* Now to read or display the contents of file, it must again be opened and the
    contents of using getc() charater by character */

	fptr=fopen("file_handling_1.c","r");
   if(!fptr)
   {
   	printf("\n Can't Open the File\n");
   }
   else
   {
   	printf("\n Contents of file are:- \n");
      while( (ch = getc(fptr))!=EOF)
      {
      	printf("%c",ch);
      }
   }
   }
   getch();
 }

