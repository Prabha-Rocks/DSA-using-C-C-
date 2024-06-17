//Inserting into a circular LL
//Circular LL creation and display
#include<stdio.h>
#include<stdlib.h>
struct Node//struct creation
{
	int data;
	struct Node *next;
}*Head;
void create(int A[],int n)
{
	int i;
	struct Node *t,*last;
	Head=(struct Node*)malloc(sizeof(struct Node));//first Node creation of Circular LL
	Head->data=A[0];
	Head->next=Head;
	last=Head;
	for(i=1;i<n;i++)//creation of subsequent Nodes
	{
		t=(struct Node*)malloc(sizeof(struct Node));
		t->data=A[i];
		t->next=last->next;
		last->next=t;
		last=t;
	}
}
void Display(struct Node *p)//Display func Circular LL
{
	do
	{
		printf("%d ",p->data);
		p=p->next;
	}
	while(p!=Head);
}
void insert(int pos,int x)
{
	struct Node *p,*t;
	int i;
	if(pos==0)
	{
		t=(struct Node*)malloc(sizeof(struct Node));
		t->data=x;
		if(Head==NULL)//that is if there is a single Node
		{
			Head=t;
			Head->next=Head;
		}
		else//Insert b4 Head or After Last
		{
			p=Head;
			while(p->next!=Head)
				p=p->next;
			p->next=t->next;
			t->next=Head;
			Head=t;//New head Node
		}
	}
	else//To Insert at any given pos
	{
		p=Head;
		for(i=1;i<pos-1;i++)
			p=p->next;
		t=(struct Node*)malloc(sizeof(struct Node));
		t->data=x;
		t->next=p->next;
		p->next=t;
	}
}
int main()
{
	int A[]={2,3,4,5,6};
	create(A,5);
	insert(3,9);
	Display(Head);
	return 0;
}
