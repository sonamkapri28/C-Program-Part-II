#include<stdio.h>
#include<conio.h>
main()
{
int m,e,h,s,c;
float t,p,a;
clrscr();
printf("Enter the marks of maths , english , hindi , science , computer \n");
scanf("%d%d%d%d%d",&m,&e,&h,&s,&c);
t=m+e+h+s+c;
p=t/500*100;
if(p>=90)
	printf("Grade A");
else if(p>=70)
	printf("Grade B");
else if(p>=50)
	printf("Grade C");
else
	printf("Grade D");
getch();
}
