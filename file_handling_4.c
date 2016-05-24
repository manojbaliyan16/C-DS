// Formatted I/O with files(records)
// using fread() and fwrite().
// these two function r easy to use and better for handling structures? array of structures

#include<stdio.h>
#include<conio.h>

void main()
{
    typedef struct {
  		char bkname[20];
    		float price;
                int qty;
            	}book;
   book b;
   int size=sizeof(book);
   char ch,filename[20];
   FILE *fptr;
   printf("\n Enter the file name for Data Storage & Retrieval.\n");
   gets(filename);
   fptr=fopen(filename,"wb");
   if(!fptr)
   {
   	printf("\n Can't Open the File\n");
   }
   else
   {
      printf("\n Do U want to enter the details of book?\n");
      scanf(" %c",&ch);
      while( ch=='y' || ch=='Y')
      {
         fflush(stdin);
      	 printf("\n Enter the book name\n");
         scanf("%[^\n]s", b.bkname);
         printf("\n Enter the book price and Quantity\n");
         scanf("%f %d",&b.price,&b.qty);
	 fwrite(&b,size,1,fptr);
         fflush(stdin);
         printf("\n Do u wish to store another book(Y/N) \n");
         scanf(" %s",&ch);
      }
      fclose(fptr);
      clrscr();

      fptr=fopen(filename,"rb");
      printf("\n Contents of the record are:-\n");
      printf("\n\t\tBook Title \t\t Price\t| Quantity\n\n");
      while( (fread(&b,size,1,fptr))== 1) // fread()returns actual number of data items
      {
      	printf("%25s\t\t%8.2f %8d\n",b.bkname,b.price,b.qty);
      }
      fclose(fptr);
   }
   getch();
}


