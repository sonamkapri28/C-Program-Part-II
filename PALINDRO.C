#include<stdio.h>
#include<conio.h>
main()
{
int n,r,sum=0,temp;
clrscr();
printf("Number : ");
scanf("%d",&n);
temp=n;
while(n!=0)
{
	r=n%10;
	sum=(sum*10)+r;
	n=n/10;
}
printf("Reverse : %d\n",sum);
if(temp==sum)
{
printf("Pallindrome no");
}
else
{
printf("Not pallindrome no");
}
getch();
}
