#include<iostream>
using namespace std;

int factorial(int num){
	if (num == 0) {
		return 1;
	} else if (num > 0) {
		return num * factorial(num - 1);
	}
}

int main(){
	int n = 0;

	cout << "Enter n = ";
	cin >> n;

	cout << n << "! = " << factorial(n) << endl;

	return 0;
}
