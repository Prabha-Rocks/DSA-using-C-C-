#include<stdio.h>
#include<stdlib.h>
struct Rectangle
{
	int len;
	int wid;
};
int main()
{
	printf("For normal variable r:");
	struct Rectangle r={20,10};
	printf("Length:%d ,Width:%d\n",r.len,r.wid);// '.'dot operator
	printf("For pointer variable *p:");
	struct Rectangle *p=&r;//pointer to structure
	printf("Length:%d ,Width:%d\n",p->len,p->wid);//'->' arrow operator
	return 0;
}

	

	
	

