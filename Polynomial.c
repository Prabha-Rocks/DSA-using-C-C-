//Polynomial Code
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct Term
{
	int coeff;
	int exp;
};
struct Poly
{
	int n;
	struct Term *t;
};
void create(struct Poly *p)
{
	int i;
	printf("Number of terms:");
	scanf("%d",&p->n);
	p->t=(struct Term*)malloc(p->n*sizeof(struct Term));
	printf("Enter Terms:\n");
	for(i=0;i<p->n;i++)
		scanf("%d %d",&p->t[i].coeff,&p->t[i].exp);
}
void display(struct Poly p)
{
	int i;
	for(i=0;i<p.n;i++)
		printf("%d x^ %d +",p.t[i].coeff,p.t[i].exp);
}
struct Poly *add(struct Poly *p1,struct Poly *p2)
{
	struct Poly *sum;
	int i,j,k;
	sum=(struct Poly*)malloc(sizeof(struct Poly));
	sum->t=(struct Term*)malloc((p1->n + p2->n)*sizeof(struct Term));
	i=j=k=0;
	while(i<p1->n && j<p2->n)
	{
		if(p1->t[i].exp > p2->t[i].exp)
			sum->t[k++]=p1->t[i++];
		else if(p1->t[i].exp < p2->t[i].exp)
			sum->t[k++]=p2->t[j++];
		else
		{
			sum->t[k].exp=p1->t[i].exp;
			sum->t[k++].coeff=p1->t[i++].coeff + p2->t[j++].coeff;	
		}
		//to copy residual terms
		for(;i<p1->n;i++) 
			sum->t[k++]=p1->t[i];
		for(;j<p2->n;j++) 
			sum->t[k++]=p1->t[j];
			
		sum->n=k;
		return sum;
	}
}
int main()
{
	struct Poly p1,p2,*p3;
	
	create(&p1);
	create(&p2);
	
	p3=add(&p1,&p2);
	
	printf("\n");
	display(p1);
	printf("\n");
	display(p2);
	printf("\n");
	display(*p3);
	free(p1.t);
	return 0;
}
