//Increasing size of array by copying ele to a bigger array
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,*q,i;
	p=(int*)malloc(5*sizeof(int));
	p[0]=1,p[1]=4,p[4]=9;
	for(i=0;i<5;i++)
		printf("%d ",p[i]);
	q=(int*)malloc(6*sizeof(int));
	for(i=0;i<5;i++)
		q[i]=p[i];
	printf("\nPrinting val of q[i]:");
	for(i=0;i<5;i++)
		printf("%d ",q[i]);
	return 0;

}
