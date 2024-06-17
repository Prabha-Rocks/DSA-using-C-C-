//Bubble Sort
#include<stdio.h>
void Bubble(int A[],int n)
{
	int i,j,flag,temp;
	for(i=0;i<n-1;i++)
	{
		flag=0;
		for(j=0;j<n-i-1;j++)
		{
			if(A[j]>A[j+1])
			{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)//the array is already sorted
			break;
		
	}
}
int main()
{
	int A[]={78,7,10,9},n=4,i;
	Bubble(A,4);
	//to display all ele
	for(i=0;i<4;i++)
		printf("%d ",A[i]);
	printf("\n");
	return 0;
}
