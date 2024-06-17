#include<stdio.h>
struct Rectangle//Declaring a Structure
{
	int len;
	int wid;
	char c;
};
struct Rectangle r;//Structure Definition
int main()
{
	printf("SizeOfStruct:%d\n",sizeof(r));
	struct Rectangle r={10,5};//initializing a structure
	printf("Area:%d\n",r.len*r.wid);
	r.len=20;
	r.wid=30;
	printf("NewArea:%d",r.len*r.wid);
	return 0;
}
