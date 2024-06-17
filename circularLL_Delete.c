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
int Delete(int pos)
{
	int x,i;
	struct Node *q,*p;
	if(pos==1)//Deleting Head Node
	{
		p=Head;
		while(p->next!=Head)
			p=p->next;
		x=Head->data;
		if(Head==p)//If single Node in LL
		{
			free(Head);
			Head=NULL;
		}
		else//Delete Head Node in a LL with more than 1 Node
		{
			p->next=Head->next;
			free(Head);
			Head=p->next;
		}
	}
	else//Delete Node froma Given Pos
	{
		p=Head;
		for(i=0;i<pos-2;i++)
			p=p->next;
		q=p->next;
		p->next=q->next;
		x=q->data;
		free(q);
	}
	return x;
}
int main()
{
	int A[]={2,3,4,5,6};
	create(A,5);
	printf("Deleted Ele:%d\n",Delete(2));
	Display(Head);
	return 0;
}
