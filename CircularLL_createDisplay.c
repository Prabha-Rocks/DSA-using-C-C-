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
int main()
{
	int A[]={2,3,4,5,6};
	create(A,5);
	Display(Head);
	return 0;
}
