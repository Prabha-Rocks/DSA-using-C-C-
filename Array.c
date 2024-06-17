#include<stdio.h>
int main()
{
    int A[5],i;
    A[0]=3;
    A[1]=67;
    A[2]=97;
    printf("A[2]=%d\n",A[2]);
    printf("size of Array A= %d\n", sizeof(A));
    printf("The Array ele:");
    for(i=0;i<5;i++)
    {
    	printf("%d\n",A[i]);
	}
	int j,n;
	printf("Enter sizeof Array B:");
	scanf("%d",&n);
	int B[n];
	printf("Array Input:");
    for(j=0;j<n;j++)
    {
    	scanf("%d",&B[j]);
	}
	printf("Printing Array Elements:\n");
    for(j=0;j<n;j++)
    {
    	printf("%d\n",B[j]);
	}
	return 0;
}
