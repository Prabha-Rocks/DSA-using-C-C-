//Polynomial Code using LL
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int coeff,Expo;
	struct Node *next;
}*poly=NULL;
//create a Polynomial
void create()
{
	struct Node *t,*last;
	int num,i;
	printf("Enter Num of terms: ");
	scanf("%d",&num);
	printf("Enter each term with coeff and Expo:\n");
	for(i=0;i<num;i++)
	{
		t=(struct Node *)malloc(sizeof(struct Node));//Node creation to store coeff and expo
		scanf("%d%d",&t->coeff,&t->Expo);
		t->next=NULL;
		if(poly==NULL)//First Node
			poly=last=t;
		else//Later on Nodes
		{
			last->next=t;
			last=t;
		}
	}
}
void Display(struct Node *p)
{
	while(p!=NULL)
	{
		printf("%dx%d +",p->coeff,p->Expo);
		p=p->next;
	}
	printf("\n");
}
int main()
{
	create();
	Display(poly);
	return 0;
}
