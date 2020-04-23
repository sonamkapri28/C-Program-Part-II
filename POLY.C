
#include<stdio.h>
#include<conio.h>
struct node
{
	int coeff;
	int powe;
	struct node *next;
};
		struct node *r, *z;
void create(int x,int y,struct node  **temp)
{

		z=*temp;
		if(z==NULL)
		{
			r=(struct node *)malloc(sizeof(struct node));
			r->coeff=x;
			r->powe=y;
			*temp=r;
			r->next=(struct node *)malloc(sizeof(struct node));
			r=r->next;
			r->next=NULL;
		}
		else
		{
			r->coeff=x;
			r->powe=y;
			r->next=(struct node *)malloc(sizeof(struct node));
			r=r->next;
			r->next=NULL;
			// printf("\n coeff %d",r->coeff);
		     // printf("powe %d\n",r->powe);

		}
}
void add(struct node *poly1,struct node *poly2,struct node *poly)
{
	while(poly1->next && poly2->next)
	{
		if(poly1->powe > poly2->powe)
		{
			poly->powe=poly1->powe;
			poly->coeff=poly1->coeff;
			poly1=poly1->next;
		}
		else if(poly1->powe < poly2->powe)
		{
			poly->powe=poly2->powe;
			poly->coeff=poly2->coeff;
			poly2=poly2->next;
		}
		else
		{
			poly->powe=poly1->powe;
			poly->coeff=poly1->coeff+poly2->coeff;
			poly1=poly1->next;
			poly2=poly2->next;
		}
		poly->next=(struct node *)malloc(sizeof(struct node));
		poly=poly->next;
		poly->next=NULL;
	}
	while(poly1->next || poly2->next)
	{
		if(poly1->next)
		{
			poly->powe=poly1->powe;
			poly->coeff=poly1->coeff;
			poly1=poly1->next;
		}
		if(poly2->next)
		{
			poly->powe=poly2->powe;
			poly->coeff=poly2->coeff;
			poly2=poly2->next;
		}
		poly->next=(struct node *)malloc(sizeof(struct node));
		poly=poly->next;
		poly->next=NULL;
	}
}
	void show(struct node *node)
	{
		while(node->next != NULL)
		{
			printf(" %dx^%d ",node->coeff,node->powe);
			node=node->next;
			if(node->next != NULL)
				printf(" + ");
		}
	}
	void main()
	{
		struct node *poly1=NULL,*poly2=NULL,*poly=NULL;
		clrscr();
		create(5,2,&poly1);
		create(4,1,&poly1);
		create(2,0,&poly1);
		printf("\nFirst Number : ");
		show(poly1);
		create(5,1,&poly2);
		create(5,0,&poly2);
		printf("\nSecond Number : ");
		show(poly2);
		poly=(struct node *)malloc(sizeof(struct node));
		add(poly1,poly2,poly);
		printf("\nAdded polynomial : ");
		show(poly);
		getch();
	}