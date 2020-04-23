#include<stdio.h>
#include<conio.h>
main()
{
int n,i,a[10],psum=0,nsum=0,pcount=0,ncount=0;
clrscr();
printf("Enter the limit of an array \n");
scanf("%d",&n);
printf("Enter the elemnts of an array \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	if(a[i]>=0)
	{       pcount++;
		psum=psum+a[i];
	}
	else
	{       ncount++;
		nsum=nsum+a[i];
	}
}
printf("Sum of positive number is %d \n",psum);
printf("Number of positive number is %d \n",pcount);
printf("Sum of negative number is %d \n",nsum);
printf("Number of negative number is %d ",ncount);
getch();
}