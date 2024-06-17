//Deleting an ele from a LL
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
int Delete(struct Node *p,int pos)
{
	struct Node *q;
	int x=-1,i;
	if(pos==1)//to delete first node if pos==0
	{
		q=first;
		x=first->data;
		first=first->next;
		free (q);
		return x;
	}
	else//if pos is other than 1st
	{//we need 2 ptrs
		p=first;
		q=0;
		for(i=0;i<pos-1;i++)//traverse to pos-1
		{
			q=p;
			p=p->next;
		}
			q->next=p->next;
			x=p->data;
			free (p);
	}
	return x;
}
int main()
{
	int A[]={3,5,7,10,15};
	create(A,5);
	printf("The deleted val is:%d\n",Delete(first,3));
	Display(first);//first=*p
	return 0;
}
