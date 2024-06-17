//Passing array through structure,call by value
#include<stdio.h>
#include<stdlib.h>
struct Array
{
	int A[5];
	int n;
};
int fun(struct Array A)
{
	int i;
	A.A[0]=2;
	A.A[1]=4;
	A.A[2]=6;
	A.A[3]=8;
	A.A[4]=10;
	printf("new array ele:");
	for(i=0;i<5;i++)
	printf("%d \n",A.A[i]);
}
int main()
{
	int i;
 	struct Array A={{1,3,5,7,9},5};
	fun(A);
	printf("old array ele:");
	for(i=0;i<5;i++)
	printf("%d ",A.A[i]);
	return 0;
}
