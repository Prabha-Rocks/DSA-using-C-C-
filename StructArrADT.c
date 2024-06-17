//Struct array ADT,Display()
#include<stdio.h>
#include<stdlib.h>
struct Array
{
	int *A;
	int size;
	int len; 
};
void Display(struct Array arr)//Display Operation of Array
{
	int i;
	printf("\nPrint Array ele: ");
	for(i=0;i<arr.len;i++)
		printf("%d ",arr.A[i]);
}
int main()
{
	int n,i;
	struct Array arr;
	printf("Enter array size in Heap:");
	scanf("%d",&arr.size);
	arr.A=(int*)malloc(arr.size*sizeof(int));
	arr.len=0;
	printf("\nEnter Len Arr to be used:");
	scanf("%d",&n);
	printf("\nEnter Array ele: ");
	for(i=0;i<n;i++)
		scanf("%d",&arr.A[i]);
	arr.len=n;
	Display(arr);
	return 0;
}
