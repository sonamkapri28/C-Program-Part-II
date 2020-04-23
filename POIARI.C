#include<stdio.h>
#include<conio.h>
main()
{
int i,*p;
clrscr();
p=&i;
printf("%u",p);
p++;
getch();
}