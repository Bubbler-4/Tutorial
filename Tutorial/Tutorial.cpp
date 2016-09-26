#include <iostream>
using namespace std;

void awesomeFeature() {
	cout << "This is AWESOME!!" << endl;
}

void awesomeFeature2(int n) {
	cout << "This is " << n << " times AWESOME!!!!" << endl;
}

int main() {
	cout << "This is NOT a Tutorial!" << endl;

	awesomeFeature();
	awesomeFeature2(3);

	return 0;
}