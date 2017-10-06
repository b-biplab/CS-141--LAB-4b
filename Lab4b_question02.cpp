#include<iostream>
using namespace std;

void printN(int n){
	if (n > 0) {
		cout << n << endl;
		printN(n - 1);
	} else {
		return;
	}
}

int main(){
	int num;

	cout << "Enter n = ";
	cin >> num;

	printN(num);

	return 0;
}
