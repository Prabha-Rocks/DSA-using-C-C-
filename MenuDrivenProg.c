//Menu driven programs
#include<stdio.h>
#include<stdlib.h>
struct Array
{
	int *A;
	int size;
	int len;
};
void Display(struct Array arr)//Display func
{
	int i;
	printf("Print Array ele:");
	for(i=0;i<arr.len;i++)
		printf("%d ",arr.A[i]);
}
void Insert(struct Array *arr,int index,int x)//Insert at given location
{
	int i;
	if(index>=0 && index<=arr->len)
		for(i=arr->len;i>index;i--)
			arr->A[i]=arr->A[i-1];
	arr->A[index]=x;
	arr->len++;
}
int Delete(struct Array *arr,int index)
{
	int x=0,i;
	if(index>=0 && index<=arr->len)
		for(i=index;i<arr->len;i++)
			arr->A[i]=arr->A[i+1];
		arr->len--;
		return x;	
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int LSearch(struct Array *arr,int x)
{
	int i;
	for(i=0;i<arr->len;i++)
	{
		if(x==arr->A[i])
			{
				swap(&arr->A[i],&arr->A[0]);
				return i;
			}
		return -1;
	}
}
int Sum(struct Array arr)
{
	int sum=0,i;
	for(i=0;i<arr.len;i++)
		{
			sum=sum+arr.A[i];
		}
	return sum;
}
int main()
{
	struct Array arr;
	int ch,x,index;
	printf("Enter arr size:%d ");
	scanf("%d",&arr.size);
	arr.A=(int *)malloc(arr.size*sizeof(int));
	printf("Menu\n");
	printf("1.Insert\n");//
	printf("2.Delete\n");
	printf("3.Search\n");
	printf("4.Sum\n");
	printf("5.Display\n");//
	printf("6.Exit\n");
	printf("Enter Choice:");
	scanf("%d",&ch);
	do
	{
	switch(ch)
	{
		case 1:printf("Enter ele and index:");
			scanf("%d%d",&x,&index);
			Insert(&arr,index,x);
			break;
		case 2:printf("Enter index:");
			scanf("%d",&index);
			x=Delete(&arr,index);
			printf("Deleted ele is:%d\n",x);
			break;
		case 3:printf("Enter ele to search:");
			scanf("%d",&x);
			index=LSearch(&arr,x);
			printf("Ele Index is:%d\n",index);
			break;
		case 4:printf("Sum:%d",Sum(arr));
			break;
		case 5:Display(arr);
	}
	}while(ch<6);
	return 0;
}
