//Finding duplicates in a string using Bitwise Operation
#include<stdio.h>
int main()
{
	char A[]="finding";
	int H=0,x=0,i;
	for(i=0;A[i]!='\0';i++)
	{
		x=1;
		x=x<<(A[i]-97);
		if((x&H)>0)//Masking
			printf("%c is a Duplicate in Str\n",A[i]);
		else
			H=x|H;//Merging
	}
	return 0;
}
