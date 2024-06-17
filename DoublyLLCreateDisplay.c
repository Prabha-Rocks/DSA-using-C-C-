//Doubly LL create display len
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	struct Node *prev;
	int data;
	struct Node *next;
}*first=NULL;
void create(int A[],int n)//create a Doubly LL
{
	struct Node *p,*last,*t;
	int i;
	//create first Node in double LL
	first=(struct Node*)malloc(sizeof(struct Node));
	first->data=A[0];
	first->prev=first->next=NULL;
	last=first;
	//creation & Linking of other Nodes in doubly LL
	for(i=1;i<n;i++)
	{
		t=(struct Node*)malloc(sizeof(struct Node));
		t->data=A[i];
		t->next=last->next;
		t->prev=last;
		last->next=t;
		last=t;
	 } 
}
//Display Doubly LL
void Display(struct Node *p)
{
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}
//Calc Length of a Doubly LL
int Length(struct Node *p)
{
	int len=0;
	while(p!=NULL)
	{
		len++;
		p=p->next;
	}
	return len;
}
int main()
{
	int A[]={1,2,3,4,5};
	create(A,5);
	printf("Length of Dll:%d\n",Length(first));
	Display(first);
	return 0;
}
