#include<stdio.h>
#include<conio.h>
main()
{
int i,j,n=1;
clrscr();
for(i=1;i<=4;i++)
{
for(j=1;j<=i;j++)
{
	printf("%d ",n);
	n++;
}
printf("\n");
}
getch();
}