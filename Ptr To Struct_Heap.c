//Pointer to struct(Heap)
#include<stdio.h>
#include<stdlib.h>
struct Rectangle
{
	int len;
	int wid;
};
int main()
{
	struct Rectangle *p;
	p=(struct Rectangle*)malloc(sizeof(struct Rectangle));//Dynamic allocation of rectangle struct
	p->len=25;
	p->wid=15;
	printf("Length:%d,Width:%d",p->len,p->wid);
	return 0; 
}
