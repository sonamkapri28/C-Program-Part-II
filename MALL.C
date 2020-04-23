#include<stdio.h>
#include<conio.h>
main()
{
int n,*p;
clrscr();
printf("Enter n");
scanf("%d",&n);
p=(int*)malloc(n*sizeof(int));
*p=10;
printf("%u \n",p);
printf("%d",*p);
getch();
}