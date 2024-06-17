//call by or pass by (address)
#include<stdio.h>
void swap(int *a,int *b)
{//Function Definition
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("Value of a and b are:%d , %d\n",*a,*b);
}
int main()
{
	int x,y;
	printf("Enter values for x and y: ");
	scanf("%d \n %d",&x,&y);
	swap(&x,&y);
	printf("Value of x and y are:%d , %d\n",x,y);
	return 0;
}

