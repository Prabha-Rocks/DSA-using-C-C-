//Combination  using Factorial code
#include<stdio.h>
int fact(int n)
{
	if(n==0)return 1;
	return fact(n-1)*n;
}
int C(int n,int r)
{
	int numerator,deno;
	numerator=fact(n);
	deno=fact(r)*fact(n-r);
	return numerator/deno;
}
int main()
{
	printf("Combination:%d ",C(5,3));
	return 0;
}
