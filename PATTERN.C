#include<stdio.h>
#include<conio.h>
main()
{
int i,j;
clrscr();
for(i=1;i<=5;i++)
{
for(j=1;j<=6;j++)
{
	if(j<=i)
	{
		printf(" ");
	}
	else
	{
	printf("*");
	}
}
printf("\n");
}
getch();
}