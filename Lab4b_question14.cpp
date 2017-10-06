#include<iostream>
using namespace std;

int numElements(float arg[50]) {
	int i=0;
	while (arg[i] != '\0') {
		++i;
	}
	return i;
}

float sumArray(float arg[50]){
	if (numElements(arg) > 0) {
		float foo = arg[numElements(arg) - 1];
		arg[numElements(arg) - 1] = '\0';
		return foo + sumArray(arg);
	}
}

int main(){
	float array[50] = {1, 2, 3, 4, 5, 6.5}; // array to check code

	cout << sumArray(array) << endl;

	return 0;
}
