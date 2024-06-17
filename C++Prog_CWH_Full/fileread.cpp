#include<iostream>
#include<fstream>
using namespace std;

int main() {
    string st2;

    // Opening file using constructor and reading it
    //ifstream in("sample24b.txt"); // read operation

    // Read and display the entire content of the file
    //while (getline(in, st2)) {
        //cout << st2 << endl;
    //}
    ifstream pin("sample24b.txt");
	string content;
	cout<<"content:"<<content;
	
    return 0;
}

