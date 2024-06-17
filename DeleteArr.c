//Delete Operation Array ADT
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
	printf("Print Array Ele:");
	for(i=0;i<arr.len;i++)
		printf("%d ",arr.A[i]);
}
int Delete(struct Array *arr,int index)
{
	int x,i;
	if(index>=0 && index<=arr->len)
	{
		x=arr->A[index];
		for(i=index;i<arr->len-1;i++)
			arr->A[i]=arr->A[i+1];
		arr->len--;
		return x;
	}
	return 0;
}
int main()
{
	struct Array arr={{2,4,6,8,9},10,5};
	printf("Deleted Ele:%d\n",Delete(&arr,2));
	Display(arr);
	return 0;
}
