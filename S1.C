#include<stdio.h>
#include<conio.h>
void f1();
void main()
{
int x=10;
clrscr();
printf("x= %d\n",x);
f1();
printf("after function= %d",x);
getch();
}
void f1()
{
int x=20;
printf("function x= %d\n",x);
}