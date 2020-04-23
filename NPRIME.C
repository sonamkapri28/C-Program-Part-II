#include<stdio.h>
#include<conio.h>
int prime(int);
main()
{
	int n,i;
	clrscr();
	printf("Enter the number ");
	scanf("%d",&n);
	prime(n);
	getch();
}
int prime(int n)
{
int i,j,flag=0;
for (i=n+1;i<=100;i++)
{
	flag=0;
	for (j=2;j<i;j++)
	{
		if(i%j==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("Next prime no is %d ",i);
		break;
	}
}
return i;
}
