#include<stdio.h>
#include<conio.h>
main()
{
int n,*p,*q,i;
clrscr();
printf("Enter no of elements ");
scanf("%d",&n);
p=(int*)calloc(n*sizeof(int));
printf("Enter elements ");
for(i=0;i<n;i++)
{
	scanf("%d",(p+i));
}
q=(int*)recalloc(p,8);
printf("Enter new elements ");
for(i=0;i<2*n;i++)
{
	scanf("%d",(q+i));
}
printf("New elements are : ");
for(i=0;i<2*n;i++)
{
	printf("%d ",*(q+i));
}
getch();
}