#include<iostream>
using namespace std;

int sumDigits(int n) {
	if (n > 0){
		return n%10 + sumDigits(n/10);
	} 
}	


int main(){
	int n;

	cout << "Enter n = ";
	cin >> n;

	cout << "Sum of digits in " << n << " is " << sumDigits(n) << "." << endl;

	return 0;
}
