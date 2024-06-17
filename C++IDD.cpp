//Display , Delete and Insert Function in C++ using class and object
#include<iostream>
using namespace std;
template<class T>
class Array
{
private:
	T *A;
	int size;
	int len;
public:
	Array()//Default Constructor
	{
		size=10;
		A=new T[10];
		len=0;
	}
	Array(int sz)//Parameterized Constructor
	{
		size=sz;
		A=new T[size];
		len=0;
	}
	~Array()//Destructor
	{
		delete[] A;
	}
	void Display();
	void Insert(int index,T x);
	T Delete(int index);
};
template<class T>
//class name(Array)::(scope Resolution)
void Array<T>::Display()
{
	int i;
	cout<<"Print Array ele:";
	for(i=0;i<len;i++)
		cout<<A[i]<<" ";
	cout<<endl;
}
template<class T>
void Array<T>::Insert(int index,T x)
{
	int i;
	if(index>=0 && index<=len)
	{
		for(i=len-1;i>=index;i--)
			A[i+1]=A[i];
		A[index]=x;
		len++;
	}
}
template<class T>
T Array<T>::Delete(int index)
{
	int i;
	T x=0;
	if(index>=0 && index<len)
	{
		x=A[index];
		for(i=index;i<len-1;i++)
			A[i]=A[i+1];
		len--;
	}
	return x;
}
int main()
{
	Array<float> arr(10);//Array object
	arr.Insert(0,4.9);//Objects of the above func created
	arr.Insert(1,8.2);
	arr.Insert(2,-7.5);
	arr.Display();
	cout<<arr.Delete(0)<<endl;
	arr.Display();
	return 0;
}
