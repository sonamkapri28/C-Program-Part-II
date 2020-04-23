#include<stdio.h>
#include<conio.h>
void f1();
void main()
{
extern int x;//decaration
clrscr();
printf("x=%d\n",x);
f1();
printf("after function x=%d",x);
getch();
}
int x;
void f1()
{
x++;
printf("inside function x=%d\n",x);
}