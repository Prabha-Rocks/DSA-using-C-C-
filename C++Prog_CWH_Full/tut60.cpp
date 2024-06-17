#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string st="Prabha";
	//opening files using constructor and writing it
	ofstream out("sample24.txt");//write operation
	out<<st;
	return 0;
}
