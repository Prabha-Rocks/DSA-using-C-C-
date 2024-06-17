//A Function Returning an Array(Heap)
#include<stdio.h>
#include<stdlib.h>
int *fun(int n)
{
	int *p,i;
	p=(int*)malloc(n*sizeof(int));//Allocating memory for array in heap
	for(i=0;i<n;i++)//Array creation in heap
	p[i]=i+1;
	return(p);
}
int main()
{
	int *A,i;
	A=fun(5);
	printf("Print array elements: ");
	for(i=0;i<5;i++)//Printing the array created in heap under main()
	printf("%d ",A[i]);
	return 0;
}

