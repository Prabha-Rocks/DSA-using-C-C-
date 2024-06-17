//Reversing a LL
//Create and display LinkedList
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
}*first=NULL;
void create(int A[],int n)//void array parameter, number of ele
{	
	int i;
	struct Node *t,*last;
	first=(struct Node*)malloc(sizeof(struct Node));
	first->data=A[0];
	first->next=NULL;
	last=first;//last node points o first
	for(i=1;i<n;i++)
	{
		t=(struct Node*)malloc(sizeof(struct Node));
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}
void Reverse(struct Node *q,struct Node *p)//Recursive Reverse of LL
{
	if(p!=0)
	{
		Reverse(p,p->next);//*q=p ,p=p->next
		p->next=q;
	}
	else
		first=q;
}
void Display(struct Node *p)
{
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}
int main()
{
	int A[]={2,4,6,8,1};
	create(A,5);
	Reverse(NULL,first);
	Display(first);//first=*p
	return 0;
}
