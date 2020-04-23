#include<stdio.h>
#include<conio.h>
int f(int);
void main()
{
	int k,a;
	clrscr();
	printf("Enter the number till added \n");
	scanf("%d",&a);
	k=f(a);
	printf("Sum is %d",k);
	getch();
}
int f(int a)
{
	int s;
	if(a==1)
	return a;
	s=a+f(a-1);
	return s;
}