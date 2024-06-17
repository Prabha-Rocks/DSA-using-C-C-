//Count Sort
#include<stdio.h>
#include<stdlib.h>
int FindMax(int A[],int n)
{
	int max=A[0],i;
	for(i=1;i<n;i++)
	{
		if(A[i]>max)
			max=A[i];
	}
	return max;
}
void CountSort(int A[],int n)
{
	int *c,i,j;
	int max=FindMax(A,n);
	c=(int *)malloc((max+1)*sizeof(int));
	for(i=0;i<max+1;i++)//Fill Count array wit 0s
		c[i]=0;
	for(i=0;i<n;i++)//increment count of A[i] in count array
		c[A[i]]++;
	i=0,j=0;
	while(i<max+1)//copy back ele in order from array count to A[i]
	{
		if(c[i]>0)
		{
			A[j++]=i;
			c[i]--;
		}
		else
			i++;
	}
}
int main() {
    int A[] = {5,1,4,7,2}, n = 5, i;
    CountSort(A,5);
    for (i = 0; i < n; i++)
        printf("%d ", A[i]);
    return 0;
}

