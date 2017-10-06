#include<iostream>
using namespace std;

int pwr(int base, int exponent){
	if (exponent == 0){
		return 1;
	} else if (exponent > 0){
		return base * pwr(base, exponent-1);
	}
}

int numDigits(int n) {
	if (n > 0) {
		return 1 + numDigits(n/10);
	}
}

int revNum(int n) {
	if (n > 0) {
		return ((n%10) * pwr(10, numDigits(n) - 1)) + revNum(n/10);
	}
}

bool isPalindrome(int n){
	return n == revNum(n);
}

int main() {
	int n=0;

	cout << "Enter n = ";
	cin >> n;

	if (isPalindrome(n)) {
		cout << n << " is a palindrome." << endl;
	} else {
		cout << n << " is not a palindrome." << endl;
	}

	return 0;
}
