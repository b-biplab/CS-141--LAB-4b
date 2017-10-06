#include<iostream>
using namespace std;

float pwr(float base, int exponent){
	if (exponent == 0){
		return 1;
	} else if (exponent > 0){
		return base * pwr(base, exponent-1);
	} else if (exponent < 0){
		return 1/(pwr(base, -exponent));
	}
}

int main(){
	float e, b;

	cout << "Enter the base: ";
	cin >> b;
	
	cout << "Enter exponent: ";
	cin >> e;

	cout << b << "^" << e << " = " << pwr(b, e) << endl;

	return 0;
}
