//sum of N natural numbers,Recursion Formula
#include<stdio.h>
#include<stdlib.h>
int sum(int n)
{
	if(n==0)
		return 0;
	else
		return(sum(n-1)+n);
}
int main()
{
	int n,a;
	printf("Enter val for n: ");
	scanf("%d",&n);
	a=sum(n);
	printf("Sum of n natural numbers:%d",a);
	return 0;
}

