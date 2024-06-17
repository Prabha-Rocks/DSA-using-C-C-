//Reverse,Shift,Rotate array
#include<stdio.h>
#include<stdlib.h>
struct Array
{
	int A[10];
	int size;
	int len;
};
void Display(struct Array arr)
{
	int i;
	printf("Print Array ele:");
	for(i=0;i<10;i++)
		printf("%d ",arr.A[i]);
}
/*void ArrReverse(struct Array *arr)
{
	int *B,i,j;
	B=(int*)malloc(arr->len*sizeof(int));
	for(i=arr->len-1,j=0;i>=0;i--,j++)
		B[j]=arr->A[i];
	for(i=0;i<arr->len;i++)
		arr->A[i]=B[i];	
}*/
void Reverse2(struct Array *arr)//By Swapping Method
{
	int i,j;
	for(i=0,j=arr->len-1;i<j;i++,j--)
	{
		int temp=arr->A[i];
		arr->A[i]=arr->A[j];
		arr->A[j]=temp;
	}
}
int main()
{
	struct Array arr={{2,4,6,7,8,99,0,1},10,8};
	Reverse2(&arr);
	//ArrReverse(&arr);
	Display(arr);
	return 0;
}
