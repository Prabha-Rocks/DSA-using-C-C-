//C++ Template Class
#include<iostream>
using namespace std;
template<class T>
class Arithmetic
{
	private:
		T a;
		T b;
	public:
	Arithmetic(T a,T b);
	T add();
	T sub();
};
	template<class T>
	Arithmetic<T>::Arithmetic(T a,T b)//Scope of arithmetic
	{
		this->a=a;//(this->)is pointer to current object
		this->b=b;
	}
	template<class T>
	T Arithmetic<T>::add()
	{
		T c;
		c=a+b;
		return c;
	}
	template<class T>
	T Arithmetic<T>::sub()
	{
		T c;
		c=a-b;
		return c;
	}
int main()
{
	Arithmetic<float>ar(10.99,5.44);//object of class initialize
	cout<<"Add: "<<ar.add()<<" "<<"Sub: "<<ar.sub()<<endl;
	return 0;
}

