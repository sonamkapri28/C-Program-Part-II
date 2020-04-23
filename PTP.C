#include<stdio.h>
#include<conio.h>
main()
{
int i=10;
int *p;
int **q;
clrscr();
p=&i;
q=&p;
printf("i= %d\n",i);
printf("&i= %u\n",&i);
printf("p= %u\n",p);
printf("*p= %d\n",*p);
printf("q= %u\n",q);
printf("*q= %d\n",*q);
printf("*(&p)= %d",*(&p));
getch();
}