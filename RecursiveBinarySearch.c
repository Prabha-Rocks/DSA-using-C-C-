//Binary Search(Recursive Process)
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
int RBS(int a[],int l,int h,int key)
{
	int mid;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(key==a[mid])
			return mid;
		else if(key<a[mid])
			return RBS(a,l,mid-1,key);
		else
			return RBS(a,mid+1,h,key);
	}
	return -1;
}
int main()
{
	struct Array arr={{1,3,5,7,9,10,11},10,7};
	printf("Key Index:%d\n",RBS(arr.A,0,arr.len,10));
	Display(arr);
	return 0;
}
