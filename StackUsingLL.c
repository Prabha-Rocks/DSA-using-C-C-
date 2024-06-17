//stack using LL(C Lang)
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
}*top=NULL;//Global variable
void push(int x)
{
	struct Node *t;
	t=(struct Node*)malloc(sizeof(struct Node));//create a node taking sizeof Heap
	
	if(t==NULL)
		printf("Stack Overflow");
	else
	{
		t->data=x;
		t->next=top;
		top=t;
	}
}
int pop()
{
	struct Node *p;
	int x=-1;//if stack empty
	if(top==NULL)
		printf("Stack Underflow");
	else
	{
		p=top;
		top=top->next;
		x=p->data;
		free(p);
	}
	return x;
}
void Display()
{
	struct Node *p;
	p=top;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}
int main()
{
	push(10);
	push(2);
	push(9);
	push(11);
	push(99);
	push(80);
	
	pop();
	pop();
	pop();
	
	Display();//Output: 9 2 10

	return 0;
}
