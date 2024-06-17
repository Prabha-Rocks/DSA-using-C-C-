//Modular program Structure & Function,Area Peri of Rectangle
#include<stdio.h>
#include<stdlib.h>
struct Rectangle
{
	int len;
	int wid;
};
struct Rectangle r;
int area(struct Rectangle r)
{
	return r.len*r.wid;
}
int peri(struct Rectangle r)
{
	return(2*(r.len+r.wid));
}
int main()
{
	struct Rectangle r={10,5};
	int a=area(r);
	int p=peri(r);
	printf("area:%d,Perimeter:%d",a,p);
	return 0;
}
