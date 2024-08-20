#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

void reverseString(char str[]) {

	int n = strlen(str);

	int i = 0;
	int j = n - 1;

	while (i < j) {

		swap(str[i], str[j]);
		i++;
		j--;

	}

}

int main() {

	char str[] = "hello";

	cout << str << endl;

	// reverseString(str);

	int n = strlen(str);

	reverse(str + 1, str + 4); // [1, 4)

	cout << str << endl;

	return 0;
}

// method 2;
// #include<iostream>
// #include <cstring>
// using namespace std;

// void reversearray(char str[], int n) {
//     for (int i = 0, j = n - 1; i < j; i++, j--) {  // For loop to replace the while loop
//         swap(str[i], str[j]);
//     }
//     cout << str;
// }

// int main() {
//     char str[] = "hello";
//     int n = strlen(str);
//     reversearray(str, n);

//     return 0;
// }

// method 3;

// #include<iostream>
// #include <cstring>
// using namespace std;

// void reversearray(char str[], int n) {
//     int i = 0, j = n - 1;
//     for (; i < j; i++) {
//         for (; j > i; j--) {
//             swap(str[i], str[j]);
//             break;  // Exit inner loop after one swap
//         }
//     }
//     cout << str;
// }

// int main() {
//     char str[] = "hello";
//     int n = strlen(str);
//     reversearray(str, n);

//     return 0;
// }
