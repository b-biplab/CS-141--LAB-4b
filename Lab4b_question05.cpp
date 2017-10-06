#include<iostream>
using namespace std;

int sumEven (int num) {
	if (num == 0 || num == 1) {
		return 0;
	} else if (num%2 == 0) {
		return num + sumEven(num - 2);
	} else {
		sumEven(num - 1);
	}
}

int sumOdd (int num) {
	if (num == 1) {
		return 1;
	} else if (num%2 == 1) {
		return num + sumOdd(num - 2);
	} else {
		sumOdd(num - 1);
	}
}

int main(){
	int n=0;

	cout << "Enter n = ";
	cin >> n;

	cout << "Sum of even numbers: " << sumEven(n) << endl;
	cout << "Sum of odd numbers: " << sumOdd(n) << endl;

	return 0;
}
