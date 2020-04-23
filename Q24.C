#include<stdio.h>
#include<conio.h>
main()
{
int a[10],b[10],c[10],n,m,s,i,j,k,temp,choice;
char ch;
clrscr();
do
{
printf("Enter limit of first array ");
scanf("%d",&n);
printf("Enter first array : ");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("Enter limit of second array ");
scanf("%d",&m);
printf("Enter second array : ");
for(i=0;i<m;i++)
{
	scanf("%d",&b[i]);
}
printf("1.Union of Arrays \n2.Intersection of Arrays \n");
printf("Enter choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
       s=n+m;
       for(i=n;i<s;i++)
       {
		a[i]=b[j];
		j++;
       }
       for(k=0;k<s;k++)
       {
	for(i=0;i<s-k;i++)
	{
	   j=i+1;
	   if(a[i]>b[j])
	   {
		temp=a[i];
		a[i]=b[j];
		b[j]=temp;
	   }
	}
       }
       printf("Union is : ");
       for(i=0;i<s;i++)
       {
		printf("%d ",a[i]);
       }
       break;
case 2: s=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				c[i]=a[i];
				s++;
			}
		}
	}
	for(k=0;k<s;k++)
	{
		for(i=0;i<s-k;i++)
		{
			j=i+1;
			if(c[i]>c[j])
			{
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
	printf("Intersection is : ");
	for(i=0;i<s;i++)
	{
		printf("%d",c[i]);
	}
	break;
default:
printf("Invalid choice");
break;
}
printf("Do you want to continue ");
fflush(stdin);
scanf("%c",&ch);
}
while(ch=='y'||ch=='Y');
getch();
}

