#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int a,b,c,disc;
float root1,root2,r1,r2,real,imaginary;
clrscr();
printf("Enter the value of a , b and c \n");
scanf("%d %d %d",&a,&b,&c);
disc=b*b-4*a*c;
if(disc>0)
{
	root1=(-b+sqrt(disc))/(2*a);
	root2=(-b-sqrt(disc))/(2*a);
	printf("The roots of qudratic equation is %f %f",root1,root2);
}
else if(disc==0)
{
	r2=r1=-b/(2*a);
	printf("The root of a qudratic equation is %f %f",r2,r1);
}
else
{
	real=-b/(2*a);
	imaginary=sqrt(-disc)/(2*a);
	printf("The root of a qudratic equation is %f %f",real,imaginary);
}
getch();
}