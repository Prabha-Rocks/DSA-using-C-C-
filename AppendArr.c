//Insert or append an element in an array(Operation)
#include<stdio.h>
#include<stdlib.h>
struct Array
{
	int A[10];
	int size;
	int len;
};
void Display(struct Array arr)//Display Operation of Array
{
	int i;
	printf("Print Array ele:");
	for(i=0;i<10;i++)
		printf("%d ",arr.A[i]);
}
void Append(struct Array*arr,int x)//Append:Insert an ele at the End
{
	if(arr->len < arr->size)
		arr->A[arr->len++]=x;
}
void Insert(struct Array *arr,int index,int x)//Insert:Insert at a given index
{
	int i;
	if(index>=0 && index<=arr->len)
		for(i=arr->len;i>index;i--)
			arr[i]=arr[i-1];
		arr->A[index]=x;
		arr->len++;
}
int main()
{
	struct Array arr={{2,4,6,8,9},10,5};
	Append(&arr,10);
	Insert(&arr,3,15);
	Display(arr);
	return 0;
}
