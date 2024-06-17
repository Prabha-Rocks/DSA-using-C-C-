//Recursive Function to display a linked list
//Create and display LinkedList
//Reverse Printing
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
void RDisplay(struct Node *p)
{
	if(p!=NULL)
	{
		RDisplay(p->next);
		printf("%d ",p->data);
	}
}
int main()
{
	int A[]={3,5,7,10,15};
	create(A,5);
	RDisplay(first);//first=*p
	return 0;
}
