//struture in heap by a function
#include<stdio.h>
#include<stdlib.h>
struct Rectangle // structure declaration
{
	int len;
	int wid;
};
struct Rectangle *fun()
{
	struct Rectangle *p;
	p=(struct rectangle*)malloc(sizeof(struct Rectangle));//struct in heap
	p->len=50;
	p->wid=25;
	return(p);
	
}
int main()
{
	struct Rectangle *r=fun();
	printf("Len:%d,Wid:%d",r->len,r->wid);
	return 0;
	
}
