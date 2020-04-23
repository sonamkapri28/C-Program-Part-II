#include<stdio.h>
#include<conio.h>
main()
{
int r,c,i,j,k,a[3][3],b[3][3],choice,s[3][3],t[3][3],m[3][3],flag=1;
char ch;
clrscr();
do
{
printf("Enter the no of rows in first matrix \n");
scanf("%d",&r);
printf("Enter the no of columns in first matrix \n");
scanf("%d",&c);
printf("Enter the elements in matrix \n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
printf("Enter the no of rows of second matrix \n");
scanf("%d",&r);
printf("Enter the no of columns of second matrix \n");
scanf("%d",&c);
printf("Enter the elements in matrix \n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		scanf("%d",&b[i][j]);
	}
}
printf("1.Add two matrices \n2.Subtract two matrices \n3.Multiply two matrices \n4.Transpone of a matrix \n");
printf("Enter the choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			s[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Sum of two matrix is \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",s[i][j]);
		}
		printf("\n");
	}
	break;
case 2:
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			s[i][j]=a[i][j]-b[i][j];
		}
	}
	printf("Subtraction of two matrix is \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",s[i][j]);
		}
		printf("\n");
	}
	break;
case 3:
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			m[i][j]=0;
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			for(k=0;k<c;k++)
			{
				m[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("Multiplication of two matrix is \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	break;
case 4:
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			t[i][j]=a[j][i];
		}
	}
	printf("Transpose matrix \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			 printf("%d ",t[i][j]);
		}
		printf("\n");
	}
	break;
case 5:
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]!=1 && a[j][i]!=0)
			{
				flag=0;
				break;
			}
			else
			flag=1;
		}
	}
	if(flag==1)
	printf("Identity matrix \n");
	else
	printf("Not identity matrix \n");
	break;
case 6:
	printf("Lower matrix is : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(r<=c)
			{
				printf("%d ",a[i][j]);
			}
		}
		printf("\n");
	}
	break;
case 7:
	printf("Upper matrix is : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(j>=i)
				printf("%d ",a[i][j]);
			else
			printf("  ");
		}
		printf("\n");
	}
	break;
default:
	printf("Invalid choice ");
	break;
}
	printf("Do you want to continue ?");
	fflush(stdin);
	scanf("%c",&ch);
}
while(ch=='y'||ch=='Y');
getch();
}







