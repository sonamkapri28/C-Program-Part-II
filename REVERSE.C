#include<stdio.h>
#include<conio.h>
#include<time.h>
void reverse(int);
static int count=0;
void main()
{
	int n;
	clock_t start,end;
	clrscr();

	printf("Enter the number : ");
	scanf("%d",&n);

	start=clock();
	reverse(n);
	end=clock();

	printf("\n\nTotal no. of Execution Statements %d",count);
	printf("\n\nCPU Execution Time %f",(end-start)/CLOCKS_PER_SEC);
	getch();
}
void reverse(int n)
{
	int rev=0,rem;
	while(n!=0)
	{
		count++;
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}
	printf("Reverse of no: %d",rev);
}