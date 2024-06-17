#include<stdio.h>
#include<stdlib.h>
int main()
{
	//Pointer to a variable
	int a=10;
	int *p;//Pointer Declaration
	p=&a;//Pointer Initialization
	printf("pointer address: %d\n",p);
	printf("pointer value:%d\n",*p);//Pointer Dereferencing
	//pointer to an array
	int A[]={1,3,5,7,9};
	int *q,i;
	q=A;
	printf("Print Array ele:");
	for(i=0;i<5;i++)
	{
		printf("%d ",q[i]);
	}
	printf("\n");
	//using malloc()
	int *r;
	int j;
	r=(int*)malloc(4*sizeof(int));//heap memory access,array inside heap
	r[0]=2;
	r[1]=4;
	r[2]=6;
	printf("Print Array ele:");
	for(j=0;j<4;j++)
	{
		printf("%d ",r[j]);
	}
	free(r);
	return 0;
}
