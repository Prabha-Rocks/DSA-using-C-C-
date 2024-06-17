//Binary Search(Iterative Process)
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
	printf("Print array elements:");
	for(i=0;i<10;i++)
		printf("%d ",arr.A[i]);
}
int BS(struct Array arr,int key)
{
	int l,mid,h;
	l=0;
	h=arr.len-1;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(key==arr.A[mid])
			return mid;
		else if(key<arr.A[mid])
			h=mid-1;
		else
			l=mid+1;
	}
	return -1;
}
int main()
{
	struct Array arr={{2,4,6,8,9,11},10,7};
	printf("No 9 is at index:%d\n",BS(arr,8));
	Display(arr);
	return 0;
}
