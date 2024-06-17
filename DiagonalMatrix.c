/*Diagonal Matrix:It is a matrix where other than the diagonal 
all the ele are 0*/
#include<stdio.h>
struct Matrix
{
	int A[10];
	int n;//Dimension of array n
};
void set(struct Matrix *m,int i,int j,int x)
{
	if(i==j)
		m->A[i-1]=x;
}
int get(struct Matrix m,int i ,int j)
{
	if(i==j)
		return m.A[i-1];
	else 
		return 0;
}
void Display(struct Matrix m)
{
	int i,j;
	for(i=0;i<m.n;i++)
	{
		for(j=0;j<m.n;j++)
		{
			if(i==j)
				printf("%d ",m.A[i]);
			else
				printf("0 ");
		}
		printf("\n");
	}
}
int main()
{
	struct Matrix m;
	m.n=4;
	set(&m,1,1,3);set(&m,2,2,7);set(&m,3,3,51);set(&m,4,4,-9);
	Display(m);
	printf("\nGet val at 3,3:%d",get(m,3,3));
	return 0;
	
}
