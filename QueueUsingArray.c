//Queue using Array in C
#include<stdio.h>
#include<stdlib.h>
struct Queue
{
	int size;
	int front,rear;
	int *Q;
};
void create(struct Queue *q,int size)//creting a ququq dynamically in heap
{
	q->size=size;
	q->front=q->rear=-1;
	q->Q=(int *)malloc(q->size*sizeof(int));
}
void enqueue(struct Queue *q,int x)//to insert ele in the rear
{
	if(q->rear==q->size-1)//to check for queue full
		printf("Queue Overflow");
	else//queue is not full
	{
		q->rear++;
		q->Q[q->rear]=x;	
	}
}
int dequeue(struct Queue *q)//to delete ele from front
{
	int x=-1;
	if(q->front==q->rear)//to check queue empty
		printf("Queue Underflow");
	else//queue not empty
	{
		q->front++;
		x=q->Q[q->front];
	}
	return x;
}
void Display(struct Queue q)
{
	int i;
	for(i=q.front+1;i<=q.rear;i++)
		printf("%d ",q.Q[i]);
	printf("\n");
}
int main()
{
	struct Queue q;//queue initialize
	create(&q,5);
	
	enqueue(&q,10);
	enqueue(&q,15);
	enqueue(&q,4);
	enqueue(&q,15);
	enqueue(&q,17);
	
	dequeue(&q);
	
	Display(q);
	return 0;
}
