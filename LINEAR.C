#include<stdio.h>
#include<conio.h>
#include<time.h>
void input();
void linear(int [],int);
int a[10],i,n,count=0,search;
static int c=0;
void input()
{
	printf("Enter the limit of array \n");
	scanf("%d",&n);
	printf("Enter the elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void linear(int a[],int n)
{
	printf("Enter the element which you want to search \n");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{    c++;
		if(search==a[i])
		{
			//c++;
			printf("Element is found at position %d \n",(i+1));
			count++;
			break;
		}
	}
	if(count==0)
	{
		c++;
		printf("Element is not found");
	}
}

void main()
{
	clock_t start,end;
	clrscr();

	input();
	start=clock();
	linear(a,n);
	end=clock();

	printf("\n\nTotal no. of Executable Statement %d",c);
	printf("\n\nCPU Execution Time %f",(end-start)/CLOCKS_PER_SEC);

       getch();
}
