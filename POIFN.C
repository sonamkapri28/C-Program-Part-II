#include<stdio.h>
#include<conio.h>
main()
{
int a,b,sum,diff,prod;
clrscr();
a=6;
b=4;
func(a,b,&sum,&diff,&prod);
printf("Sum = %d, Difference = %d ,Product = %d\n",sum,diff,prod);
getch();
}
func(int x,int y,int *ps,int *pd,int *pp)
{
*ps=x+y;
*pd=x-y;
*pp=x*y;
}
