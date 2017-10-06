#include<iostream>
using namespace std;

int sumN(int num) {
	if (num > 0) {
		return num + sumN(num - 1);
	} else {
		return 0;
	}
}


int main(){
	int n=0;

	cout << "Enter n = ";
	cin >> n;

	cout << "Sum of natural numbers from 1 through " << n << " is " << sumN(n) << "." << endl;

	return 0;
}
