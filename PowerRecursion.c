//Power Recursion
#include<stdio.h>
#include<stdlib.h>
int pow(int m,int n)
{
	if(n==0)
		return 1;
	else
		return(pow(m,n-1)*m);
}
int main()
{
	int m,n,a;
	printf("Enter val for m and n: ");
	scanf("%d %d",&m,&n);
	a=pow(m,n);
	printf("Power:%d",a);
	return 0;
}
