//Parenthesis Matching
//stack using LL(C Lang)
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	char data;
	struct Node *next;
}*top=NULL;//Global variable
void push(char x)
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
	char x=-1;//if stack empty
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
int isEmpty()
{
	struct Node*t;
	t=(struct Node*)malloc(sizeof(struct Node));//create a node taking sizeof Heap
	if(t==NULL)
		return 1;//True
}
int isBalanced(char *exp)
{
	int i;
	for(i=0;exp[i]!='\0';i++)
	{
		if(exp[i]=='(')//push opening brac only
			push(exp[i]);
		else if(exp[i]==')')
		{
			if(top==NULL)//if stack is empty
				return 0;//F, No Matching closing brac found
			pop();//pop ')'
		}
	}
	if(top==NULL)//st the end stack is empty
		return 1;// T
	else
		return 0;// F
	
	//if stack is empty in the end then'?' return 1'T' otherwise':' return 0'F'
}
int main()
{
	char *exp="(((a+b)*(c-d))";
	printf("True(1),False(0):%d\n",isBalanced(exp));

	return 0;
}
