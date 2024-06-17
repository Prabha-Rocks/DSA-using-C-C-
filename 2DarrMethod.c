//2D Array creation methods
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int A[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}};//By normal val assign
	//Array Pointers(Pointer to an Arr),in Heap
	int *B[3];
	int i,j;
	B[0]=(int*)malloc(4*sizeof(int));
	B[1]=(int*)malloc(4*sizeof(int));
	B[2]=(int*)malloc(4*sizeof(int));
	
	//Double Pointers Array Heap
	int **C;
	C=(int*)malloc(3*sizeof(int));
	C[0]=(int*)malloc(4*sizeof(int));
	C[1]=(int*)malloc(4*sizeof(int));
	C[2]=(int*)malloc(4*sizeof(int));
	printf("Print 2D Array elements: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf("%d ",A[i][j]);
	}
	return 0;
	
}
