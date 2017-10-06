#include<iostream>
using namespace std;

int nthFibonacci(int n){
	if (n == 0 || n == 1) {
		return 1;
	} else if (n > 1) {
		return nthFibonacci(n-1) + nthFibonacci(n-2);
	}
}

int main(){
	int n;

	cout << "Enter n = ";
	cin >> n;

	cout << "Digit " << n << " of the Fibonacci series is " << nthFibonacci(n) << "." << endl;

	return 0;
}
