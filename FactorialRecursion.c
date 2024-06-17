//Factorial Recursion
#include<stdio.h>
#include<stdlib.h>
int fact(int n)
{
	if(n==0)
		return 1;
	else
		return fact(n-1)*n;
}
int main()
{
	int n;
	printf("Enter val for n: ");
	scanf("%d",&n);
	printf("Factorial:%d",fact(n));
	return 0;
}
