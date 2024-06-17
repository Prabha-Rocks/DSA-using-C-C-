//Insert into a LL
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
void insert(struct Node *p,int index,int key)
{
	int i;
	struct Node *t;
	t=(struct Node *)malloc(sizeof(struct Node));//New node creation in heap
	t->data=key;
	if(index==0)
	{
		t->next=first;
		first=t;
	}
	else
	{
		p=first;
		for(i=0;i<index-1;i++)
			p=p->next;
		t->next=p->next;
		p->next=t;
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
int main()
{
	int A[]={3,5,7,10,15};
	create(A,5);
	insert(first,3,9);
	Display(first);//first=*p
	return 0;
}
