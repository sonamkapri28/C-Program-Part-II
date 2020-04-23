#include<stdio.h>
#include<conio.h>
main()
{
float f,ce;
clrscr();
printf("Enter the temperature in Fahrenheit \n");
scanf("%f",&f);
ce=(f-32)*5/9;
printf("Celcius = %f",ce);
getch();
}