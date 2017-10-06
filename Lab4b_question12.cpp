#include<iostream>
using namespace std;

int gcd(int n1, int n2) {
	if (n1 == n2) {
		return n2;
	} else if (n1 > n2) {
		return gcd(n1-n2, n2);
	} else if (n1 < n2) {
		return gcd(n1, n2-n1);
	}
}

int lcm(int n1, int n2) {
	return ((n1*n2)/gcd(n1, n2));
}

int main(){
	int num1, num2;

	cout << "Enter the two numbers: " << endl;
	cin >> num1 >> num2;

	cout << "The LCM of " << num1 << " and " << num2 << " is " << lcm(num1, num2) << "." << endl;

	return 0;
}
