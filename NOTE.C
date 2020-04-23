#include<stdio.h>
#include<conio.h>
main()
{
int notes,amount,choice;
clrscr();
printf("Enter the currency");
scanf("%d",&amount);
printf("Enter the notes you want");
scanf("%d",&choice);
switch(choice)
{
	case 100:
		notes=amount/100;
		printf("no of 100 rupees notes %d\n",notes);
		amount=amount%100;
	case 50:
		notes=amount/50;
		printf("no of 50 rupees notes %d\n",notes);
		amount=amount%50;
	case 20:
		notes=amount/20;
		printf("no of 20 rupees notes %d\n",notes);
		amount=amount%20;
	case 10:
		notes=amount/10;
		printf("no of 10 rupees notes %d\n",notes);
		amount=amount%10;
	case 5:
		notes=amount/5;
		printf("no of 5 rupees notes %d\n",notes);
		amount=amount%5;
	case 1:
		notes=amount/1;
		printf("no of 1 rupee notes %d\n",notes);
		amount=amount%1;
		break;
	default:
		printf("Enter the valid choice");
		break;
}
getch();
}



