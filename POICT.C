#include<stdio.h>
#include<conio.h>
main()
{
int var1=10,var2=20;
const int * ptr = &var2;
clrscr();
//*ptr=40;  //cannot modify a constand obj
ptr=&var1;
getch();
}