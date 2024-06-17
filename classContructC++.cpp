//C++ class Constructor
#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int len;
		int wid;
	public:
	Rectangle()//Default constructor
	{
		len=0;
		wid=0;
	}
    Rectangle(int l,int b)//Parameterized Constructor
	{
		len=l;
		wid=b;
	}
	int area()//facilitator
	{
		return(len*wid);
	}
	int peri()//facilitator
	{
		return(2*(len+wid));
	}
	void setlen(int l)//mutator
	{
		len=l;
	}
	void setwid(int b)//mutator
	{
		wid=b;
	}
	int getlen()//accessor
	{
		return(len);
	}
	int getwid()//accessor
	{
		return(wid);
	}
	~Rectangle()//destructor
	{ 
		cout<<"destructor"<<endl;
	}
};
int main()
{
    Rectangle r(30,20);//initialize class
	cout<<"Area: "<<r.area()<<" "<<"Perimeter: "<<r.peri()<<endl;
	return 0;
}
