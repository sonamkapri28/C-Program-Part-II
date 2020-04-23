#include<stdio.h>
#include<conio.h>
main()
{
int n1,n2,i,j,flag,temp,count=0;
clrscr();
printf("Enter the range \n");
scanf("%d %d",&n1,&n2);
if(n2<2)
{
	printf("There is no prime number");
	exit(0);
}
printf("Prime numbers are : \n");
temp=n1;
if(n1%2==0)
{
	n1++;
}
for(i=n1;i<=n2;i=i+2)
{
	flag=0;
	for (j=2;j<=i/2;j++)
	{
		if((i%j)==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("%d \n ",i);
		count++;
	}
}
printf("Prime no are %d ",count);
getch();
}