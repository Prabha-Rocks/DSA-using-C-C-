/*Comparision between 2 strings,same greater or smaller 
in terms of its appearance in dictionary*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char A[]="Prabha";
	char B[]="Painting";
	int i,j;
	for(i=0,j=0;A[i]!='\0',B[j]!='\0';i++,j++)
	{
		if(A[i]!=B[j])
			break;
	}
	if(A[i]==B[j])
		printf("Both strings are same");
	else if(A[i]<B[j])
		printf("String1 is smaller");
	else
		printf("String1 is larger");
	return 0;
}
