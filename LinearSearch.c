//Linear search and improved linear Search(move to Front)
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
	printf("The Array Elements are:");
	for(i=0;i<arr.len;i++)
		printf("%d ",arr.A[i]);
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int LSearch(struct Array *arr,int key)
{
	int i;
	for(i=0;i<arr->len;i++)
	{
		if(key==arr->A[i])
		{
			swap(&arr->A[i],&arr->A[0]);
			return i;
		}
	}
	return -1;
}
int main()
{
	struct Array arr={{2,3,6,7,8},10,5};
	printf("The searched ele index:%d\n",LSearch(&arr,8));
	Display(arr);
	return 0;
}
