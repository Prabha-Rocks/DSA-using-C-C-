// C++ code stack using LL
//t=temporary node pointer
#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		struct Node *next;
};
class Stack
{
	private:
		Node *top;
	public:
		stack(){top=NULL;}//Default Constructor
		void push(int x);
		int pop();
		void Display();	
};
void Stack::push(int x)
{
	Node *t=new Node;
	if(t==NULL)
		cout<<"Stack Overflow";
	else
	{
		t->data=x;
		t->next=top;
		top=t;
	}
}
int Stack::pop()
{
	Node *t=new Node;
	int x=-1;//stack empty
	if(t==NULL)
		cout<<"Stack Underflow";
	else
	{
		t=top;
		top=top->next;
		x=t->data;
		delete t;
	}
	return x;
}
void Stack::Display()
{
	Node *t=new Node;
	t=top;
	while(t!=NULL)
	{
		cout<<" "<<t->data;
		t=t->next;
	}
	cout<<endl;
}
int main()
{
	Stack stk;//class initialize
	
	stk.push(1);
	stk.push(1);
	stk.push(1);
	stk.push(1);
	
	stk.pop();
	stk.pop();
	stk.pop();
	
	stk.Display();
	return 0;	
}
