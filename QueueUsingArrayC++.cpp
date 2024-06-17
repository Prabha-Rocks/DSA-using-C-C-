//Queue using array in C++
#include<iostream>
using namespace std;
class Queue
{
	private:
		int front,rear;
		int size;
		int *Q;
	public:
		Queue()//Default Constructor
		{front=rear=-1;size=10;Q=new int[size];}
		Queue(int size)//Parameterized Constructor
		{front=rear=-1;this->size=size;Q=new int[this->size];}
		void enqueue(int x);
		int dequeue();
		void Display();		
};
void Queue::enqueue(int x)
{
	if(rear==size-1)
		cout<<"Stack Overflow";
	else
	{
		rear++;
		Q[rear]=x;
	}
}
int Queue::dequeue()
{
	int x=-1;
	if(front==rear)
		cout<<"Stack Underflow";
	else
	{
		front++;
		x=Q[front+1];
	}
	return x;
}
void Queue::Display()
{
	int i;
	for(i=front+1;i<=rear;i++)
		cout<<" "<<Q[i];
	cout<<"\n";
}
int main()
{
	Queue q(5);//object of class Queue
	q.enqueue(10);
	q.enqueue(90);
	q.enqueue(87);
	q.enqueue(41);
	
	q.dequeue();
	q.dequeue();
	
	q.Display();
	return 0;
}
