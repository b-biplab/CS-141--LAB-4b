#include<iostream>
using namespace std;

void printOdd(int n1, int n2) {
	if (n1 <= n2) {
		if (n1%2 != 0) {
			cout << n1 << endl;
		}
		printOdd(n1+1, n2);
	} else {
		return;
	}
}

void printEven (int n1, int n2) {
	if (n1 <= n2) {
		if (n1%2 == 0) {
			cout << n1 << endl;
		}
		printEven(n1+1, n2);
	} else {
		return;
	}
}

int main(){
	int first=0, last=0;

	cout << "Enter the starting number: ";
	cin >> first;

	cout << "Enter the ending number: ";
	cin >> last;

	cout << "Even numbers: " << endl;
	printEven(first, last);

	cout << "Odd numbers: " << endl;
	printOdd(first, last);

	return 0;
}
