/*Using only simple conditions(only one relational operator per condition) and nested
ifs, write a program that accepts 3 distinct numbers and prints the largest of the 3.
--------------------------------------------------------------------------------------*/

#include <iostream>

using namespace std;

int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "Enter 3 distinct numbers: " << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	
	if (a > b) {
		if (a > c) {
			cout << "The biggest number is: " << a << endl;
		}
	}
	else if (b > a) {
		if (b > c) {
			cout << "The biggest number is: " << b << endl;
		}
	}
	else if (c > a) {
		if (c > b) {
			cout << "The biggest number is: " << c << endl;
		}
	}
	
	return 0;

}