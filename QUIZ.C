#include<stdio.h>
#include<conio.h>
main()
{
int choice,score=0,answer=0;
clrscr();
printf("*******************QUESTION 1***********************\n");
printf("RAM stands for \n");
printf("1.Read Access Memory \n");
printf("2.Read Only Memory \n");
printf("3.Random Access Memory \n");
printf("4.Random Auto Memory \n");
printf("Enter the choice  \n");
scanf("%d",&choice);
switch(choice)
{
	case 1:
	printf("Wrong Answer \n");
	score=score-1;
	score++;
	break;
	case 2:
	printf("Wrong Answer \n");
	score=score-1;
	score++;
	break;
	case 3:
	printf("Correct Answer \n");
	score=score+4;
	score++;
	break;
	case 4:
	printf("Wrong Answer \n");
	score=score-1;
	score++;
	break;
	default:
	printf("Invalid choice \n");
	break;
}
printf("**************************QUESTION 2*****************************\n");
printf("ROM stands for \n");
printf("1.Read Access Memory \n");
printf("2.Read Only Memory \n");
printf("3.Random Access Memory \n");
printf("4.Random Auto Memory \n");
printf("Enter the choice  \n");
scanf("%d",&choice);
switch(choice)
{
	case 1:
	printf("Wrong Answer \n");
	score=score-1;
	score++;
	break;
	case 2:
	printf("Correct Answer \n");
	score=score+4;
	score++;
	break;
	case 3:
	printf("Wrong Answer \n");
		score=score-1;
	score++;
	break;
	case 4:
	printf("Wrong Answer \n");
		score=score-1;
	score++;
	break;
	default:
	printf("Invalid choice \n");
	break;
}
printf("*****************QUESTION 3****************************\n");
printf("ALU stands for \n");
printf("1.All Logical Unit \n");
printf("2.Arithmetic Logical Unit\n");
printf("3.Access Logical Unit \n");
printf("4.Auto Logical Unit \n");
printf("Enter the choice  \n");
scanf("%d",&choice);
switch(choice)
{
	case 1:
	printf("Wrong Answer \n");
	score=score-1;
	score++;
	break;
	case 2:
	printf("Correct Answer \n");
	score=score+4;
	score++;
	break;
	case 3:
	printf("Wrong Answer \n");
	score=score-1;
	score++;
	break;
	case 4:
	printf("Wrong Answer \n");
	score=score-1;
	score++;
	break;
	default:
	printf("Invalid choice \n");
	break;
}
printf("******************QUESTION 4********************\n");
printf("Java is \n");
printf("1.Platform indepemdent \n");
printf("2.Compile type language \n");
printf("3.Case sensitive \n");
printf("4.All of these \n");
printf("Enter the choice  \n");
scanf("%d",&choice);
switch(choice)
{
	case 1:
	printf("Wrong Answer \n");
	score=score-1;
	score++;
	break;
	case 2:
	printf("Wrong Answer \n");
	score=score-1;
	score++;
	break;
	case 3:
	printf("Wrong Answer \n");
	score=score-1;
	score++;
	break;
	case 4:
	printf("Correct Answer \n");
	score=score+4;
	score++;
	break;
	default:
	printf("Invalid choice \n");
	break;
}
printf("*********************QUESTION 5********************\n");
printf("Which is not the language of computer \n");
printf("1.English \n");
printf("2.Pythone\n");
printf("3.JAVA \n");
printf("4.PHP \n");
printf("Enter the choice  \n");
scanf("%d",&choice);
switch(choice)
{
	case 1:
	printf("Correct Answer \n");
	score=score+4;
	score++;
	break;
	case 2:
	printf("Wrong Answer \n");
	score=score-1;
	score++;
	break;
	case 3:
	printf("Wrong Answer \n");
	score=score-1;
	score++;
	break;
	case 4:
	printf("Wrong Answer \n");
	score=score-1;
	score++;
	break;
	default:
	printf("Invalid choice \n");
	break;
}

printf("Total Score %d",score);
getch();
}