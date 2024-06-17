//BFS AND DFS Code
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
int isEmpty()
{
	return front==NULL;
}
void BFS(int G[][7],int start,int n)
{
	int i=start,j;
	int visited[7]={0};
	printf("%d ",i);
	visited[i]=1;
	enqueue(i);
	while(!isEmpty())
	{
		i=dequeue();
		for(j=0;j<7;j++)
		{
			if(G[i][j]==1 && visited[j]==0)
			{
				printf("%d ",j);
				visited[j]=1;
				enqueue(j);
			}
		}
	}
}//BFS=Level Order Traversal of a tree
void DFS(int G[][7],int start,int n)
{
	int j;
	static int visited[7]={0};
	if(visited[start]==0)
	{
		printf("%d ",start);
		visited[start]=1;
		for(j=1;j<7;j++)
		{
			if(G[start][j]==1 && visited[j]==0)
				DFS(G,j,n);
		}
	}
}//DFS= Pre Order Traversal of a Tree

int main()
{
	int G[7][7]={{0,0,0,0,0,0,0},
				 {0,0,1,1,0,0,0},
				 {0,1,0,0,1,0,0},
				 {0,1,0,0,1,0,0},
				 {0,0,1,1,0,1,1},
				 {0,0,0,0,1,0,0},
				 {0,0,0,0,1,0,0}};//Adjacency Matrix
	//BFS(G,1,7);			 
	DFS(G,1,7);
				 
	return 0;
}
