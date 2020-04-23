#include<stdio.h>
#include<conio.h>
#include<limits.h>
void dup();
void sec();
void main()
{
int choice;
char ch;
clrscr();
do
{
printf("1.Delete duplicate elements from an array \n2.Find second largest element in an array \n");
printf("Enter choice \n");
scanf("%d",&choice);
switch(choice)
{
case 1:
	dup();
	break;
case 2:
	sec();
	break;
default:
	printf("Invalid choice");
	break;
}
printf("\nDo you want to continue");
fflush(stdin);
scanf("%c",&ch);
}
while(ch=='Y'||ch=='y');
getch();
}
void dup()
{
int a[10],i,j,k,n;
printf("Enter limit of array ");
scanf("%d",&n);
printf("Enter array : ");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n;k++)
				{
					a[j]=a[j+1];
				}
			n--;
			}
		}
	}
	printf("Array after duplicates : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
void sec()
{
int a[10],i,n,first,second;
printf("Enter the limit of an array \n");
scanf("%d",&n);
printf("Enter the elements of an array \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
first=second=INT_MIN;
for(i=0;i<n;i++)
{
	if(a[i]>first)
	{
		second=first;
		first=a[i];
	}
	else if(a[i]>second && a[i]<first)
	{
		second=a[i];
	}
}
printf("Second largest number is %d",second);
}

