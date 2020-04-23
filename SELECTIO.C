#include<stdio.h>
#include<conio.h>
#include<time.h>
void input();
void selection(int [],int);
int smallest(int [],int,int);
int a[10],n,i,j,k,pos,temp,small;
static int count=0;
void main()
{
	clock_t start,end;

	clrscr();

	input();

	start=clock();
	selection(a,n);
	end=clock();

	printf("\n\nTotal no. of Execution Statements %d",count);
	printf("\n\nCPU Execution Time %f",(end-start)/CLOCKS_PER_SEC);
	getch();
}
void input()
{
	printf("Enter array size : ");
	scanf("%d",&n);

	printf("Enter array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void selection(int a[],int n)
{
	for(i=0;i<n;i++)
	{
		count++;
		pos = smallest(a,n,i);
		temp = a[i];
		a[i] = a[pos];
		a[pos] = temp;
	}
	printf("Array after Selection Sort : ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
int smallest(int a[],int n,int i)
{
	small = a[i];
	pos = i;
	for(j=i+1;j<n;j++)
	{  count++;
		if(a[j] < small)
		{
			//count++;
			small = a[j];
			pos = j;
		}
	}
	return pos;
}