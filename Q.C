#include<stdio.h>
#include<conio.h>
main()
{
int a[]={1,2,3,4};
int *(p)[4]={a,a+1,a+2,a+3};
clrscr();
printf("%u\n",p);
printf("%u\n",*p);
printf("%d",*(*p));
getch();
}