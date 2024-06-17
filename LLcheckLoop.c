//Check FOR LOOP in a LL
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
int isLoop(struct Node *f)
{
	struct Node *p,*q;
	p=q=f;
	do
	{
		p=p->next;
		q=q->next;
		q=q!=NULL?q->next:NULL;//if  ,?(then),:(otherwise)
	}while(p&&q && p!=q);//if p==q then stop loop
	if(p==q)//there exists a loop
		return 1;//if true
	else
		return 0;//if no loop or false
}
int main()
{
	struct Node *t1,*t2;
	int A[]={3,5,7,10,15};
	create(A,5);
	printf("ifLoop(0),ifLinear(1):%d\n",isLoop(first));

	t1=first->next->next;//t1 points on 7
	t2=first->next->next->next->next;//t2 points on last Node
	t2->next=t1;//loop created,t2 pointson 7 
	
	//printf("ifLoop(0),ifLinear(1):%d\n",isLoop(first));
	
	//Display(first);//first=*p
	return 0;
}
