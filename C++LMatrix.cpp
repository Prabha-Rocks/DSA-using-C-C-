//Lower Triangular Matrix in C++
#include<iostream>
using namespace std;
class LMatrix
{
	private:
		int *A,n;
	public:
		LMatrix()//Default Constructor
		{
			n=2;
			A=new int[2*(2+1)/2];
		}
		LMatrix(int n)
		{
			this->n=n;
			A=new int[n*(n+1)/2];//no. of non zero ele
		}
		~LMatrix()
		{
			delete []A;
		}
		void set(int i,int j,int x);
		int get(int i,int j);
		void display();
};
//to call the class member function classname(LMatrix)::(scope resolution) followed by member function
void LMatrix::set(int i,int j,int x)
{
	if(i>=j)
		A[i*(i-1)/2+j-1]=x;//Row Major Formula
}
int LMatrix::get(int i,int j)
{
	if(i>=j)
		return A[i*(i-1)/2+j-1];
	else
		return 0;
}
void LMatrix::display()
{
	int i,j;
	cout<<"Matrix Ele are:"<<endl;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i>=j)
				cout<<A[i*(i-1)/2+j-1]<<" ";
			else
				cout<<"0 ";
		}
		cout<<endl;
	}
	cout<<endl;
}
int main()
{
	int i,j,x,d;
	cout<<"Enter Dimension:"<<endl;
	cin>>d;
	LMatrix m(d);//object of class LMatrix
	cout<<"Enter all Matrix ele:"<<endl;
	for(i=1;i<=d;i++)
	{
		for(j=1;j<=d;j++)
		{
			cin>>x;
			m.set(i,j,x);
		}
	}
	cout<<endl;
	m.display();
	return 0;
	
}
