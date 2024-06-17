//array address printing using %u
#include<stdio.h>
int main()
{
	int i;
	int A[5];
	for(i=0;i<5;i++)
		printf("%u \n",&A[i]);
	return 0;
}
