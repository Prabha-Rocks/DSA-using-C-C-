//Remove Duplicate in LL
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
void Display(struct Node *p)
{
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}
void RemoveDuplicate(struct Node *p)
{
	struct Node *q=p->next;
	while(q!=0)
	{
		if(p->data != q->data)
		{
			p=q;
			q=q->next;
		}
		else
		{
			p->next=q->next;
			free(q);
			q=p->next;
		}
	}
}
int main()
{
	int A[]={3,5,5,7,7};
	create(A,5);
	RemoveDuplicate(first);
	Display(first);//first=*p
	return 0;
}
