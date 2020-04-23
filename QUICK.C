#include<stdio.h>
#include<conio.h>
int partition(int [],int,int);
void quick(int [],int,int);
void input();
int a[10],i,n;
void main()
{
	clrscr();
	input();
	quick(a,0,n-1);
	printf("Array after Quick sort : ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
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
void quick(int a[],int beg,int end)
{
	int loc;
	if(beg<end)
	{
		loc=partition(a,beg,end);
		quick(a,beg,loc-1);
		quick(a,loc+1,end);
	}
}
int partition(int a[],int beg,int end)
{
	int left,right,temp,loc,flag=0;
	loc=left=beg;
	right=end;
	while(flag != 1)
	{
		while((a[loc] <= a[right]) && (loc != right))
			right--;
		if(loc==right)
			flag=1;
		else if(a[loc]>a[right])
		{
			temp=a[loc];
			a[loc]=a[right];
			a[right]=temp;
			loc=right;
		}
		if(flag != 1)
		{
			while((a[loc] >= a[left]) && (loc != left))
				left++;
			if(loc==left)
				flag=1;
			else if(a[loc]<a[left])
			{
				temp=a[loc];
				a[loc]=a[left];
				a[left]=temp;
				loc=left;
			}
		}
	}
	return loc;
}