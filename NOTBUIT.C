#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char ch1[20],ch2[10],ch,temp;
int i,j,choice,flag;
clrscr();
do
{
printf("Enter the first string : ");
scanf("%s",ch1);
printf("1.Length \n2.Copy \n3.Concatenate \n4.Reverse \n5.Lower case \n6.Upper case \n7.Compare \n");
printf("Enter the choice \n");
scanf("%d",&choice);
switch(choice)
{
case 1:
	for(i=0;ch1[i]!='\0';i++);
	printf("Length of string is %d \n",i);
	break;
case 2:
	for(i=0;ch1[i]!='\0';i++)
	{
		ch2[i]=ch1[i];
	}
	ch2[i]='\0';
	printf("Copied string is %s \n",ch2);
	break;
case 3:
	printf("Enter second string : ");
	scanf("%s",&ch2);
	i=0;
	j=0;
	while(ch1[i]!='\0')
	{
		i++;
	}
	while(ch2[j]!='\0')
	{
		ch1[i]=ch2[j];
		j++;
		i++;
	}
	ch1[i]='\0';
	puts(ch1);
	break;
case 4:
	i=0;
	j=strlen(ch1)-1;
	while(i<j)
	{
		temp=ch1[i];
		ch1[i]=ch1[j];
		ch1[j]=temp;
		i++;
		j--;
	}
	printf("Reverse of string is %s \n",ch1);
	break;
case 5:
	for(i=0;i<=strlen(ch1);i++)
	{
		if(ch1[i]>='A' && ch1[i]<='Z')
		{
			ch1[i]=ch1[i]+32;
		}
	}
	puts(ch1);
	break;
case 6:
	for(i=0;i<=strlen(ch1);i++)
	{
		if(ch1[i]>='a' && ch1[i]<='z')
		{
			ch1[i]=ch1[i]-32;
		}
	}

	puts(ch1);
	break;
case 7:
	printf("Enter second string : ");
	scanf("%s",&ch2);
	for(i=0;ch1[i]!='\0';i++)
	{
		if(ch1[i]==ch2[i])
			flag=1;
		else
			flag=0;
	}
	if(flag==1)
	printf("Strings are equal \n");
	else
	printf("Strings are not equal \n");
	break;
default:
	printf("Invalid choice ");
	break;
}
	printf("Do you want to continue ?");
	fflush(stdin);
	scanf("%c",&ch);
}
while(ch=='y'||ch=='Y');
getch();
}


