#include<iostream>
using namespace std;

int numElements(float arg[50]) {
	int i=0;
	while (arg[i] != '\0') {
		++i;
	}
	return i;
}

float maxElement(float arg[50], int n) {
	if (n == 1) {
		return arg[0];
	} else {
		if (arg[n-1] > maxElement(arg, n-1)){
			return arg[n-1];
		} else {
			return maxElement(arg, n-1);
		}
	}
}
		
float minElement(float arg[50], int n) {
	if (n == 1) {
		return arg[0];
	} else {
		if (arg[n-1] > minElement(arg, n-1)){
			return minElement(arg, n-1);
		} else {
			return arg[n-1];
		}
	}
}

int main(){
	float array[50] = {1500, 7, 1560, 1, 5.5, 00.2, 1000}; // array to check code

	cout << maxElement(array, numElements(array)) << endl;
	cout << minElement(array, numElements(array)) << endl;

	return 0;
}
