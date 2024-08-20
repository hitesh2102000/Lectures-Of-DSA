#include<iostream>
#include <cstring>
using namespace std;
void reversearray(char str[], int n) {
	int i = 0;
	int j = n - 1;
	while (i < j) {
		swap(str[i], str[j]);
		i++;
		j--;
	}
	cout << str;
}
int main() {

	char str[] = "hello";
	int n = strlen(str);
	reversearray(str, n);

	return 0;

}