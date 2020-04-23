#include<stdio.h>
#include<conio.h>
main()
{
int l,b,r,h,choice;
float pi=3.14,area;
clrscr();
printf("1.Triangle \n2.Circle \n3.Rectangle \n4.Sphere \n");
printf("Enter the choice");
scanf("%d",&choice);
switch(choice)
{
	case 1:
		printf("Enter base ");
		scanf("%d",&b);
		printf("Enter height ");
		scanf("%d",&h);
		area=0.5*b*h;
		printf("Area of triangle is %f",area);
		break;
	case 2:
		printf("Enter radius ");
		scanf("%d",&r);
		area=pi*r*r;
		printf("Area of circle is %f",area);
		break;
	case 3:
		printf("Enter length ");
		scanf("%d",&l);
		printf("Enter breadth ");
		scanf("%d",&b);
		area=l*b;
		printf("Area of rectangle is %f",area);
		break;
	case 4:
		printf("Enter radius ");
		scanf("%d",&r);
		area=4/3*pi*r*r*r;
		printf("Area of sphere is %f",area);
		break;
	default:
		printf("Invalid choice");
		break;
}
getch();
}

