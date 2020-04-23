#include<stdio.h>
#include<conio.h>
main()
{
register int x;
int y;
clrscr();
x=10;
y=x+5;
y=++x;
x=x+10;
printf("x=%d\n",x);
printf("y=%d",y);
getch();
}