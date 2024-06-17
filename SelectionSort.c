//Selection Sort
#include<stdio.h>
void SelectionSort(int A[],int n)
{
	int i,j,k,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=k=i;j<n;j++)
		{
			if(A[j]<A[k])
				k=j;
		}
		temp=A[i];
		A[i]=A[k];
		A[k]=temp;
	}
}
int main()
{
	int A[]={78,7,10,9},n=4,i;
	SelectionSort(A,4);
	//to display all ele
	for(i=0;i<4;i++)
		printf("%d ",A[i]);
	printf("\n");
	return 0;
}
