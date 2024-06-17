//Stack Using array
#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int size,top;
	int *s;
};
void create(struct stack *st)
{
	printf("Enter stack size:");
	scanf("%d",&st->size);
	st->top=-1;
	st->s=(int *)malloc(st->size*sizeof(int));//create stack in Heap
}
void Display(struct stack st)
{
	int i;
	for(i=st.top;i>=0;i--)
		printf("%d ",st.s[i]);
	printf("\n");
}
void push(struct stack *st,int x)
{
	if(st->top==st->size-1)
		printf("Stack Overflow\n");
	else
	{
		st->top++;
		st->s[st->top]=x;
	}
}
int pop(struct stack *st)
{
	int x=-1;//if stack empty
	if(st->top==-1)
		printf("Stack empty\n");
	else
	{
		x=st->s[st->top];
		st->top--;
	}
	return x;
}
int peek(struct stack st,int pos)
{
	int x=-1;//if stack is empty
	if(st.top-pos+1 < 0)
		printf("Invalid pos\n");
	else
		x=st.s[st.top-pos+1];
	return x;
}
int stacktop(struct stack st)
{
	if(st.top==-1)
		printf("stack empty\n");
	else
		return st.s[st.top];
}
int main()
{
	struct stack st;
	create(&st);
	push(&st,1);
	push(&st,3);
	push(&st,5);
	push(&st,9);
	push(&st,11);
	push(&st,15);

	pop(&st);
	pop(&st);
	pop(&st);
	
	printf("peek:%d\n",peek(st,3));

	printf("stacktop val:%d\n",stacktop(st));
	Display(st);
	return 0;
}
