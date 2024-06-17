//Tree Recursion Code:A Recursion having more than one func call
#include<stdio.h>
#include<stdlib.h>
void fun(int n)
{
	if(n>0)
	{
		printf("%d ",n);//Output:3 2 1 1 2 1 1 
		fun(n-1);
		fun(n-1);
	}
}
int main()
{
	fun(3);
}
