//array Creation in Heap
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i;
	p=(int*)malloc(5*sizeof(int));
	p[0]=2;
	p[2]=5;
	for(i=0;i<5;i++)
		printf("%d ",p[i]);
	printf("\nsizeof pointer p:%d ",sizeof(p));
	return 0;
}
