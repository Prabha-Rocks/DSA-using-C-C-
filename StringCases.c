//Changing Cases in strings
#include<stdio.h>
int main()
{
	char A[]="WELCOME";//changing upper case to lower case
	int i;
	for(i=0;A[i]!='\0';i++)
		A[i]+=32;
	printf("Lower Case:%s\n",A);
	char B[]="wELcOmE";//Toggle case
	for(i=0;B[i]!='\0';i++)
	{
		if(B[i]>=65 && B[i]<=90)
			B[i]+=32;
		else if(B[i]>=97 && B[i]<=122)
			B[i]-=32;
	}
	printf("Toggle Case:%s",B);
	return 0;
}
