//Code to Add and Count Number of ele in LinkedList
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
int count(struct Node *p)
{
	if(p==0)
		return 0;
	else
		return count(p->next)+1;
}
int sum(struct Node *p)
{
	if(p==0)
		return 0;
	else
		return sum(p->next)+p->data;
}
int main()
{
	int A[]={3,5,7,10,15};
	create(A,5);
	Display(first);//first=*p
	printf("\nCount:%d",count(first));
	printf("\nSum:%d",sum(first));
	return 0;
}
