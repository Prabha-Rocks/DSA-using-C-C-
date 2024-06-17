//Array as a Parameter
/*arrays are always Passed by address
They use Pointers*/
#include<stdio.h>
void fun(int *A,int n)
{ 
	int i;
	A[0]=25;
	A[1]=45;
	printf("Print New Array ele: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
}
int main()
{
	int j;
	int A[5]={2,4,6,8};
	fun(A,5);
	printf("Print Original Array ele: ");
	for(j=0;j<5;j++)
	{
		printf("%d ",A[j]);
	}
}
