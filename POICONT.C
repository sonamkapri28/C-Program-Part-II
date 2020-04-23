#include<stdio.h>
#include<conio.h>
main()
{
int var1=10,var;
int * const ptr = &var1;
clrscr();
//ptr=&var; cannot modify a pointing object
*ptr=30;
getch();
}