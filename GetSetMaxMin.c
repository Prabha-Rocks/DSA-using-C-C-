//Get(),Set(),Avg(),Max() Functions on Array
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
	for(i=0;i<10;i++)
		printf("%d\n",arr.A[i]);
}
int Get(struct Array arr,int index)//Get val from index
{
	if(index>=0 && index<=arr.len)
		return arr.A[index];
	return -1;
}
void Set(struct Array *arr,int index,int x)//Set Val at an index
{
	if(index>=0 && index<arr->len)
		arr->A[index]=x;	
}
int Max(struct Array arr)//ArrMax
{
	int max=arr.A[0];
	int i;
	for(i=1;i<arr.len;i++)
	{
		if(arr.A[i]>max)
			max=arr.A[i];
	}
	return max;
}
int Min(struct Array arr)//ArrMin
{
	int min=arr.A[0];
	int i;
	for(i=1;i<arr.len;i++)
	{
		if(arr.A[i]<min)
			min=arr.A[i];
	}
	return min;
}
int Sum(struct Array arr)//ArrSum
{
	int sum=0,i;
	for(i=0;i<arr.len;i++)
		sum=sum+arr.A[i];
	return sum;
}
int Avg(struct Array arr)//ArrAvg
{
	int sum=0,i;
	for(i=0;i<arr.len;i++)
		sum=sum+arr.A[i];
	return (float)sum/arr.len;
}

int main()
{
	struct Array arr={{2,4,6,8,11,25,10,9,0},10,9};
	Set(&arr,4,999);
	printf("val at index 6:%d\n",Get(arr,6));
	printf("arrMax:%d\n",Max(arr));
	printf("arrMin:%d\n",Min(arr));
	printf("arrSum:%d\n",Sum(arr));
	printf("arrAvg:%d\n",Avg(arr));
	Display(arr);
	return 0;
}
