/* use of fflush()- to demonstrate clearing the buffer.
Though it only works in Windows but fundamentally use of fflush is generally considered for output streams. As for fflush(stdin), the reason people call it is
that some functions, scanf in particular, sometimes leave the input in a counter-intuitive state. but never use it for Input Streams
 */
#include<stdio.h>
#include<conio.h>

void main()
{
char ch1,ch2;
clrscr();
printf("\n Enter the first character \n");
scanf("\n%c",&ch1);
//fflush(stdin);
printf("\n Enter the second character \n");
scanf("\n%c",&ch2);
//fflush(stdin);
printf("Entered characters are:  %c and %c ",ch1,ch2);
getch();
}
