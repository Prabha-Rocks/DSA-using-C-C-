//Class and object C++, Area Peri of Rectangle
#include<iostream>
using namespace std;
class Rectangle
{
	public:
	int len;//struct declaration under class
	int wid;
	int initialize(int l,int b)//struct initialize
	{
		len=l;
		wid=b;
	}
 	int area()
 	{
 		return len*wid;	
	}
	int peri()
	{
		return(2*(len+wid));
	}
};
int main()
{
	int l,b;
	struct Rectangle r;//struct definition
	cout<<"Enter Length and Width: "<<endl;
	cin>>l>>b;
    r.initialize(l,b);//object creation to func in class
    int a=r.area();
    int p=r.peri();
    cout<<"Area: "<<a<<" "<<"Perimeter: "<<p<<endl;
    return 0;
}
    
	

