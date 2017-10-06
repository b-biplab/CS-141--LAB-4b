#include<iostream>
using namespace std;

int numElements(char arg[50]) {
	int i=0;
	while (arg[i] != '\0') {
		++i;
	}
	return i;
}

void printArray(char arg[50]) {
	if (numElements(arg) > 0){
		cout << arg[numElements(arg) - 1] << endl;
		arg[numElements(arg)-1] = '\0';
		printArray(arg);
	}
}

int main(){
	char array[50] = {'a', 'b', 'A', 'C'}; // array to check code

	cout << numElements(array) << endl;
	printArray(array);

	return 0;
}
