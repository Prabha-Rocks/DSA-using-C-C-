//Insert Ele in a Sorted Linkedlist
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
void insert(struct Node *p,int x)
{
	struct Node *t,*q=0;
	t=(struct Node*)malloc(sizeof(struct Node));//New Node t created in heap
	t->data=x;
	t->next=0;
	if(p==0)//if it is the first ele to be created in LL
		first=t;
	else
		while(p!=0 && p->data<x)//Searching until p>x
		{
			q=p;
			p=p->next;
		}
		if(p==first)//if x to be inserted is the smallest
		{
			t->next=first;
			first=t;
		}
		else//Insert at a pos in ascending order
		{
			t->next=q->next;
			q->next=t;
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
	int A[]={10,20,30,40,50};
	create(A,5);
	insert(first,36);
	Display(first);//first=*p
	return 0;
}
