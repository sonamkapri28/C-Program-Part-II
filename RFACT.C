#include<stdio.h>
#include<conio.h>
int f(int);
main()
{
	int k;
	clrscr();
	k=f(4);
	printf("Factorial is : %d",k);
	getch();
}
int f(int a)
{
	int s;
	if(a==1)
	return (a);
	s=a*f(a-1);
	return(s);
}
