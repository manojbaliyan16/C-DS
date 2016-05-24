// Record I/O in files

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
   char ch,filename[20];
   FILE *fptr;
   printf("\n Enter the file name where u want to store details\n");
   gets(filename);
   fptr=fopen(filename,"w");
   if(!fptr)
   {
   	printf("\n Can't Open the File\n");
   }
   else
   {
   	printf("\n Do U want to enter the details of book\n");
      scanf(" %c",&ch);
      while( ch=='y' || ch=='Y')
      {
         fflush(stdin);
      	printf("\n Enter the book name,price and quantiy\n");
         scanf("%s %f %d",b.bkname,&b.price,&b.qty);
         fprintf(fptr,"%s %f %d",b.bkname,b.price,b.qty);
         fflush(stdin);
         printf("\n Do u wish to store another book(Y/N) \n");
         scanf(" %s",&ch);
      }
      fclose(fptr);
      clrscr();

      fptr=fopen(filename,"r");
      printf("\n Contents of the record are:-\n");
      while( (fscanf(fptr,"%s %f %d",b.bkname,&b.price,&b.qty)) !=EOF)
      {
      	printf("\n %40s %8.2f %8d",b.bkname,b.price,b.qty);
      }
      fclose(fptr);

   }
   getch();
}



