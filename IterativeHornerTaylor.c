//Taylor Series using Horner Rule,Iterative method
#include<stdio.h>
double e(double x,double n)
{
	static double s=1;
	for(;n>0;n--)
	{
		s=1+x/n*s;
	}
	return s;
}
int main()
{
	printf("%lf ",e(2,10));
}
