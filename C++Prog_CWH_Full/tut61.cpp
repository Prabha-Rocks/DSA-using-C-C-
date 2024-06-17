#include<iostream>
#include<fstream>
using namespace std;
int main(){string st;
	//connecting file to pout stream
	/*ofstream pout("sample24.txt");
	
	//create string name and take input
	string name;
	cout<<"Enter name:";
	cin>>name;
	
	//write string into a file
	pout<<"My name is "+name;*/
	
	ifstream in("sample24.txt");
	in>>st;
	getline(in,st);
	cout<<st;
	return 0;
	
}
