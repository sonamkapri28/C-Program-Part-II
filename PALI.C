#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rem,rev=0,temp,sum=0,s,rv=0,rm;
	clrscr();
	printf("\nEnter number : ");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("Number : %d\n",temp);
	printf("Reverse : %d\n",rev);
	sum=sum+temp+rev;
	s=sum;
	while(sum!=0)
	{
		rm=sum%10;
		rv=rv*10+rm;
		sum=sum/10;
	}
	printf("Sum of %d and %d is %d\n",temp,rev,rv);
	if(s==rv)
		printf("Palindrome");
	else
		printf("Not palindrome");
	getch();
}