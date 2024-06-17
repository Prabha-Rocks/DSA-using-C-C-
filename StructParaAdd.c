//Structure as Parameter, Call by address
#include<stdio.h>
#include<stdlib.h>
struct Rectangle // structure declaration
{
	int len;
	int wid;
};
struct Rectangle r;//structure definition
int fun(struct Rectangle *r)
{
    r->len=10;
    r->wid=5;
    printf("Len:%d,Wid:%d\n",r->len,r->wid);

}
int main()
{
	struct Rectangle r={20,10};
	fun(&r);
	printf("Len:%d,Wid:%d\n",r.len,r.wid);
	return 0;
}

