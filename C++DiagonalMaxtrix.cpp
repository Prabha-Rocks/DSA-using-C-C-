//C++ code for diagonal matrix using class and object
#include<iostream>
using namespace std;
class Diagonal
{private:
	int n,*A;
public:
	Diagonal()//Default Constructor
	{
		n=2;
		A=new int[2];
	}
	Diagonal(int n)//Parameterized Constructor
	{
		this->n=n;//this->n(dim)  , =n(int n)local parameter
		A=new int(n);
	}
	~Diagonal()//Destructor
	{
		delete []A;
	}
	void set(int i,int j,int x);
	int get(int i,int j);
	void Display();
};
//to call the class member function classname(Diagonal)::(scope resolution) followed by memeber function
void Diagonal::set(int i,int j,int x)
{
	if(i==j)
		A[i-1]=x;
}
int Diagonal::get(int i,int j)
{
	if(i==j)
		return A[i-1];
	else
		return 0;
}
void Diagonal::Display()
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
				cout<<A[i]<<" ";
			else
				cout<<"0 ";
		}
	cout<<endl;
	}
}
int main()
{
	Diagonal d(4);//object of class Diagonal
	d.set(1,1,23);d.set(2,2,-9);d.set(3,3,10);d.set(4,4,67);
	cout<<d.get(3,3)<<endl;
	cout<<d.get(3,4)<<endl;
	d.Display();
	return 0;
}
