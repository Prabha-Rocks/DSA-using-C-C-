//Check if a LL is sorted or not
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
int isSorted(struct Node *p)
{
	int x=-65536;
	while(p!=NULL)
	{
		if(p->data < x)
			return 0;
		x=p->data;
		p=p->next;
	}
	return 1;
}
int main()
{
	int A[]={10,20,30,40,60};
	create(A,5);
	printf("Sorted(1)and Unsorted(0):%d\n",isSorted(first));
	Display(first);//first=*p
	return 0;
}
