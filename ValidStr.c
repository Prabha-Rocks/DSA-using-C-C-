//Check for validity of a string
//Q:A password to be set where only Alphabets and numbers,nothing else allowed.
#include<stdio.h>
#include<stdlib.h>
int VStr(char *name)
{
	int i;
	for(i=0;name[i]!='\0';i++)
	{
		if(!(name[i]>=65 && name[i]<=90) && !(name[i]>=97 && name[i]<=122) 
		&& !(name[i]>=48 && name[i]<=57))
			return 0;
	}
	return -1;
}
int main()
{
	char *name="Prabh@249";
	if(VStr(name))
		printf("Valid String");
	else
		printf("Invalid String");
	return 0;		
}
