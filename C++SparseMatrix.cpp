// C++ code for Sparse Matrix
#include <iostream>
using namespace std;

class Element
{
public:
    int i, j, x; // row, col, ele
};

class SMatrix
{
private:
    int m, n;   // dimension r, c
    int num;    // number of non-zero ele
    Element *e; // array dynamically in heap

public:
    SMatrix(int m, int n, int num) // Parameterized Constructor
    {
        this->m = m;
        this->n = n;
        this->num = num;
        e = new Element[this->num];
    }

    ~SMatrix() // Destructor
    {
        delete[] e;
    }
	SMatrix operator+(SMatrix &s);
    friend istream &operator>>(istream &is, SMatrix &s); // Extraction operator istream, overloading, for read
    friend ostream &operator<<(ostream &os, SMatrix &s); // Insertion operator ostream, for display
	
};
SMatrix	SMatrix::operator+(SMatrix &s)
{
	int i,j,k;
	if(m!=s.m && n!=s.n)
	{
        cerr << "Matrix dimensions do not match for addition." << endl;
        exit(1);
    }	
	SMatrix *sum=new SMatrix(m,n,num+s.num);
	i=j=k=0;
	while(i<num && j<s.num)
	{
		if(e[i].i<s.e[j].i)
			sum->e[k++]=e[i++];
		else if(e[i].i > s.e[j].i)
			sum->e[k++]=e[j++];
		else
		{
			if(e[i].j < s.e[j].j)
				sum->e[k++]=e[i++];
			else if(e[i].j > s.e[j].j)
				sum->e[k++]=e[j++];
			else
			{
				sum->e[k]=e[i];
				sum->e[k++].x=e[i++].x+ s.e[j++].x;
			}
		}
	}
	//copy residual ele
	for(;i<num;i++)
		sum->e[k++]=e[i];
	for(;i<s.num;j++)
		sum->e[k++]=s.e[j];
	sum->num=k;
	return *sum;
}


istream &operator>>(istream &is, SMatrix &s)
{
    int i;
    cout << "Enter non-zero ele:";
    for (i = 0; i < s.num; i++)
        cin >> s.e[i].i >> s.e[i].j >> s.e[i].x; // row num, col num, ele itself
    return is;
}

ostream &operator<<(ostream &os, SMatrix &s)
{
    int i, j, k;
    k = 0;
    for (i = 0; i < s.m; i++)
    {
        for (j = 0; j < s.n; j++)
        {
            if (s.e[k].i == i && s.e[k].j == j) // display non-zero ele
                cout << s.e[k++].x << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
    cout << endl;
    return os;
}

int main()
{
    // objects of function in class created
    SMatrix s1(5, 5, 5);
    SMatrix s2(5, 5, 5);
    
    cin >> s1;
    cin >> s2;
    
	SMatrix sum=s1+s2;
	cout<<"First Matrix:"<<endl<<s1;
	cout<<"Second Matrix:"<<endl<<s2;
	cout<<"Sum Matrix:"<<endl<<sum;
    return 0;
}

