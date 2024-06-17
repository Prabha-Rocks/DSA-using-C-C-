/*Indirect Recursion:More than one function call 
calling each other in a circular fashion*/
#include<stdio.h>
#include<stdlib.h>
void funA(int n)
{
	if(n>0)
	{
		printf("%d ",n);//Output:20 19 9 8 4 3 1
		funB(n-1);
	}
}
void funB(int n)
{
	if(n>1)
	{
		printf("%d ",n);
		funA(n/2);
	}
}
int main()
{
	funA(20);
	return 0;
}
