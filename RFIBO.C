#include<stdio.h>
#include<conio.h>
int fibo(int);
main()
{
	int n,i,c=0;
	clrscr();
	printf("Enter the limit");
	scanf("%d",&n);
	printf("Fibonacci serirs is : ");
	for(i=1;i<=n;i++)
	{
		printf("%d ",fibo(c));
		c++;
	}
	getch();

}
int fibo(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return(fibo(n-1)+fibo(n-2));
	}
}