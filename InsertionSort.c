//Insertion Sort
#include<stdio.h>
void InsertionSort(int A[],int n)
{
	int i,j,x;
	for(i=0;i<n;i++)
	{
		j=i-1;
		x=A[i];
		while(j>-1 && A[j]>x)
		{
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=x;
	}
}
int main()
{
	int A[]={78,7,10,9},n=4,i;
	InsertionSort(A,4);
	//to display all ele
	for(i=0;i<4;i++)
		printf("%d ",A[i]);
	printf("\n");
	return 0;
}
