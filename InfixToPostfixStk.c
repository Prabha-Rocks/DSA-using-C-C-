#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node
{
	int data;
	struct Node *next;
};

struct Node *top=NULL; // Global variable

void push(int x)
{
	struct Node *t;
	t=(struct Node*)malloc(sizeof(struct Node)); // Create a node taking sizeof Heap
	
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
	int x=-1; // If stack is empty
	
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

int pre(char x)
{
	if(x=='*'||x=='/')
		return 2;
	else if(x=='+'||x=='-')
		return 1;
	else
		return 0;
}

int isOperand(char x) // To check if the element is an operand
{
	if(x=='*'||x=='/'||x=='+'||x=='-')
		return 0; // False
	else
		return 1; // True
}

char *convert(char *infix)
{
	char *postfix;
	int i=0,j=0;
	int len;
	len=strlen(infix);
	postfix=(char *)malloc((len+1)*sizeof(char));
	
	while(infix[i]!='\0')
	{
		if(isOperand(infix[i])) // If the element is an operand
			postfix[j++]=infix[i++];
		else // If it's an operator
		{
			if(top == NULL || pre(infix[i]) > pre(top->data))
				push(infix[i++]);
			else
			{
				postfix[j++]=pop();
			}
		}
	}
	while(top != NULL) // Pop any remaining operators from the stack
	{
		postfix[j++]=pop();
	}
	
	postfix[j]='\0';
	return postfix;
}

int main()
{
	char *infix="a+b*c";
	char *postfix=convert(infix);
	printf("%s\n", postfix);

	return 0;
}

