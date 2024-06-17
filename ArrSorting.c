//Array Sorting,ReArrange
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
/*void InsertSort(struct Array *arr,int x)
{
	int i=arr->len-1;
	if(arr->len==arr->size)
		return;
	while(arr->A[i]>x)
	{
		arr->A[i+1]=arr->A[i];
		i--;
	}
	arr->A[i+1]=x;
}*/
int ArrSort(struct Array arr)
{
	int i;
	for(i=0;i<arr.len-1;i++)
	{
		if(arr.A[i]>arr.A[i+1])
			return 0;
	}
	return 1;
}
void ReArrange(struct Array *arr)//-ve ele in left,+ve ele in right of array
{
	int i=0,j=arr->len-1,temp;
	while(i<j)
	{
		while(arr->A[i]<0){i++;}
		while(arr->A[j]>=0){j--;}
		if(i<j)
		{
			temp=arr->A[i];
			arr->A[i]=arr->A[j];
			arr->A[j]=temp;
		}
	}
}
int main()
{
	struct Array arr={{-4,4,0,8,-59,16,-16,-9},10,8};
	//InsertSort(&arr,24);
	printf("Print 1(true),0(false):%d\n",ArrSort(arr));
	ReArrange(&arr);
	Display(arr);
	return 0;
}
