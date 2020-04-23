#include<stdio.h>
#include<conio.h>
main()
{
char c="d";
clrscr();
if(isalnum(c))
	printf("Alphabetic");
else
	printf("Not alphabetic");
getch();
}