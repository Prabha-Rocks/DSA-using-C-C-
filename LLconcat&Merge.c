//Concatinating and Merging two LL
//Create and display LinkedList
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
}*first=NULL,*second=NULL,*third=NULL;
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
void create2(int A[],int n)//void array parameter, number of ele
{	
	int i;
	struct Node *t,*last;
	second=(struct Node*)malloc(sizeof(struct Node));
	second->data=A[0];
	second->next=NULL;
	last=second;//last node points o first
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
void Concat(struct Node *p,struct Node *q)
{
	third=p;//3rd LL is pointed by pointer 3rd
	while(p->next != NULL)
		p=p->next;
	p->next=q;
}
void Merge(struct Node *p,struct Node *q)
{
	struct Node *last;
	if(p->data < q->data)//if p LL data smaller
	{
		third=last=p;
		p=p->next;
		last->next=NULL;
	}
	else//if q LL data is smaller 
	{
		third=last=q;
		q=q->next;
		last->next=NULL;
	}
	while(p != NULL && q != NULL)
	{
		if(p->data < q->data)
		{
			last->next=p;
			last=p;
			p=p->next;
			last->next=NULL;
		}
		else
		{
			last->next=q;
			last=q;
			q=q->next;
			last->next=NULL;
		}
	if(p !=NULL)
		last->next=p;
	else
		last->next=q;
	}
}
int main()
{
	int A[]={3,5,7,10,15};
	int B[]={1,2,4,6,9,11,17};
	create(A,5);
	create2(B,6);
	//Concat(second,first);
	Merge(first,second);
	printf("3rd Merge LL:");
	Display(third);//third is a pointer pointing to concat LL
	
	return 0;
}
