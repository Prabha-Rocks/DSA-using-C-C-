//Sparse Matrix Representation code
#include<stdio.h>
#include<stdlib.h>
struct Element
{
	int i,j,x;
};
struct SMatrix
{
	int m,n;
	int num;//No. of nonzero element
	struct Element *e;//Dynamic array of ele created
};
void create(struct SMatrix *s)
{
	int i;
	printf("Enter Dimension:");
	scanf("%d%d",&s->m,&s->n);
	printf("Enter no. of Non-Zero Element:");
	scanf("%d",&s->num);
	s->e=(struct Element*)malloc(s->num*sizeof(struct Element));
	printf("Enter all non-zero ele:\n");
	for(i=0;i<s->num;i++)
		scanf("%d%d%d",&s->e[i].i,&s->e[i].j,&s->e[i].x);
}
void display(struct SMatrix s)
{
	int i,j,k=0;
	for(i=0;i<s.m;i++)
	{
		for(j=0;j<s.n;j++)
		{
			if(i==s.e[k].i && j==s.e[k].j)
			{
				printf("%d ",s.e[k].x);
				k++;
			}
			else 
				printf("0 ");
		}
		printf("\n");
	}
	printf("\n");
}
int main()
{
	struct SMatrix s;
	create(&s);
	display(s);
	return 0;
}
