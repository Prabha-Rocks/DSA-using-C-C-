#include<stdio.h>
#include<stdlib.h>

struct Node
{
	struct Node *lchild;
	int data;
	struct Node *rchild;	
}*root=NULL;

void insert(int key)
{
	struct Node *t=root;
	struct Node *r,*p;
	if(root==NULL)
	{
		p=(struct Node *)malloc(sizeof(struct Node));
		p->data=key;
		p->lchild=p->rchild=NULL;
		root=p;
		return;
	}
	while(t!=NULL)
	{
		r=t;
		if(key < t->data)
			t=t->lchild;
		else if(key > t->data)
			t=t->rchild;
		else
			return;
	}
	p=(struct Node *)malloc(sizeof(struct Node));
	p->data=key;
	p->lchild=p->rchild=NULL;
	
	if(key < r->data) 
		r->lchild=p;
	else 
		r->rchild=p;
}

void inorder(struct Node *p)
{
	if(p!=NULL)
	{
		inorder(p->lchild);
		printf("%d ",p->data);
		inorder(p->rchild);
	}
}

struct Node* Rsearch(struct Node *t, int key)
{
	if(t==NULL)
		return NULL;
	if(key==t->data)
		return t;
	else if(key<t->data)
		return Rsearch(t->lchild,key);
	else
		return Rsearch(t->rchild,key);
}

int main()
{
	struct Node t;
	insert(10);
	insert(5);
	insert(20);
	insert(8);
	inorder(root);
	
	struct Node* result = Rsearch(root, 5);
	if (result != NULL)
		printf("\nElement found: %d\n", result->data);
	else
		printf("\nElement not found\n");
		
	return 0;
}

