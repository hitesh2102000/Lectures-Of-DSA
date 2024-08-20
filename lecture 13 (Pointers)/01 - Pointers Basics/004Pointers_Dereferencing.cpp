#include<iostream>

using namespace std;

int main() {

	int x = 10;
	int *xptr = &x;
	cout << "*xptr = " << *xptr << endl;

	char ch = 'A';
	char* chptr = &ch;
	cout << "*chptr = " << *chptr << endl;


	cout << endl;

// imp question

	int z = 516;
	char* ptr = (char*)&z;
	cout << (int)*ptr << endl;
	return 0;
}