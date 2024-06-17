//Queue using LinkedList
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
}*front=NULL,*rear=NULL;
void enqueue(int x)
{
	struct Node *t;
	t=(struct Node*)malloc(sizeof(struct Node));
	if(t==NULL)//if Queue Full/Heap Full
		printf("Queue Overflow");
	else
	{
		t->data=x;
		t->next=NULL;
		if(front==NULL)//it is first node created
			front=rear=t;
		else//if already nodes are present
		{
			rear->next=t;
			rear=t;
		}
	}
}
int dequeue()
{
	int x=-1;
	struct Node *t;
	if(front==NULL)
		printf("Queue Underflow");
	else
	{
		t=front;
		front=front->next;
		x=t->data;
		free(t);
	}
	return x;
}
void display()
{
	struct Node *t=front;
	while(t!=NULL)
	{
		printf("%d ",t->data);
			t=t->next;
	}
	printf("\n");
}
int main()
{
	enqueue(10);
	enqueue(15);
	enqueue(20);
	enqueue(20);

	printf("%d\n",dequeue());
	
	display();
	return 0;	
}
