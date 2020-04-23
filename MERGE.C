#include<stdio.h>
#include<conio.h>
void input();
void mergesort(int [],int,int);
void merge(int [],int,int,int);
int n,a[10],i,j,k,temp;
void main()
{
	clrscr();
	input();
	mergesort(a,0,n-1);
	printf("Array after Merge Sort : ");
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
void mergesort(int a[],int beg,int end)
{
	int mid;
	if(beg<end)
	{
		mid=(beg+end)/2;
		mergesort(a,beg,mid);
		mergesort(a,mid+1,end);
		merge(a,beg,mid,end);
	}
}
void merge(int a[],int beg,int mid,int end)
{
	int i=beg,j=mid+1,k,index=beg;
	int temp[10];
	while(i<=mid && j<=end)
	{
		if(a[i]<a[j])
		{
			temp[index]=a[i];
			i++;
		}
		else
		{
			temp[index]=a[j];
			j++;
		}
		index++;
	}
	if(i>mid)
	{
		while(j<=end)
		{
			temp[index]=a[j];
			index++;
			j++;
		}
	}
	else
	{
		while(i<=mid)
		{
			temp[index]=a[i];
			index++;
			i++;
		}
	}
	k=beg;
	while(k<index)
	{
		a[k]=temp[k];
		k++;
	}
}