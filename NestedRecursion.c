/*Nested Recursion:One Recursive call inside another,A Parameter is 
passed as Recursive call*/
#include<stdio.h>
#include<stdlib.h>
int fun(int n)
{
	if(n>100)
		return(n-10);
	else
		return(fun(fun(n+11)));
}
int main()
{
	printf("%d ",fun(95));//Output:91
}
