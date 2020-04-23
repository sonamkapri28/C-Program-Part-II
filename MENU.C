#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int a,b,choice,add,sub,mul,div;
clrscr();
	printf("Enter the value of a = ");
	scanf("%d",&a);
	printf("Enter the value of b = ");
	scanf("%d",&b);
	printf("1.Addition \n");
	printf("2.Subtraction \n");
	printf("3.Multiplication \n");
	printf("4.Division \n");
	printf("Enter the choice which you want to perform \n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			add=a+b;
			printf("Addition of %d + %d is %d \n",a,b,add);
			break;

		case 2:
			sub=a-b;
			printf("Subtraction of %d - %d is %d \n",a,b,sub);
			break;
		case 3:
			mul=a*b;
			printf("Multiplication of %d * %d is %d \n",a,b,mul);
			break;
		case 4:
			div=a/b;
			printf("Division of %d / %d is %d \n",a,b,div);
			break;
		default:
			printf("Invalid choice \n");
			break;
	}
getch();
}
