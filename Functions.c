#include<stdio.h>
int add(int a,int b)
{
	int c;
	c=a+b;
	return(c);
}
int main()
{
	int x,y,z;
	printf("Enter values for x and y: ");
	scanf("%d\n%d",&x,&y);
	z=add(x,y);
	printf("The sum is:%d",z);
	return 0;
}
