#include<stdio.h>
#include<conio.h>
#include<time.h>
void prime(int);
static int c=0;
void main()
{
	int n;
	clock_t start,end;

	clrscr();

	printf("Enter the number : ");
	scanf("%d",&n);

	start=clock();
	prime(n);
	end=clock();

	printf("\n\nTotal no. of Execution Statements %d",c);
	printf("\n\nCPU Execution Time %f",(end-start)/CLOCKS_PER_SEC);
	getch();
}
void prime(int n)
{
	int i,count=0,fact;
	for(i=1;i<=n;i++)
	{       c++;
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("\n\n%d is a prime no",n);
	}
	else
	{
		printf("\n\n%d is not a prime no",n);
	}
}