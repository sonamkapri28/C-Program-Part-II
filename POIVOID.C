#include<stdio.h>
#include<conio.h>
main()
{
int i=20;
int *addi=&i;
float f=20.4;
float *addf=&f;
void *vptr;
vptr=&i;
vptr=&f;
printf("%d\n",*(int *)vptr);
printf("%f",*(float *)vptr);
getch();
}