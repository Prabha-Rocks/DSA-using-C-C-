#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	ofstream out;
	out.open("sample24.txt");
	out<<"hii\n";
	out<<"This is me";
	out.close();
	
	ifstream in;
	string st;
	in.open("sample24b.txt");
	//in>>st>>st2;
	//cout<<st<<st2;
	while(in.eof()==0){
		getline(in,st);
		cout<<st<<endl;
	}
	in.close();
	return 0;
}
