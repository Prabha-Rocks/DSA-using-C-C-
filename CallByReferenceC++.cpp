//Call by or pass by reference in C++, this is not prsent in C
#include<iostream>
using namespace std;
void swap(int &a,int &b)
{//Function Definition
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"Value of a and b are:"<<a <<endl<<b<<endl;
}
int main()
{
	int x,y;
	cout<<"Enter values for x and y:"<<endl;
	cin>>x>>y;
	swap(x,y);
	cout<<"Value of x and y are:"<<x<<endl<<y<<endl;
	return 0;
}
