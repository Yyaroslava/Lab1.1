// lab 1.1.cpp

#include "line.h"
#include <iostream>

using namespace std;

Line makeLine(double A, double B, double x) {
	Line y;
	if (y.Init(A, B, x))
		cout << "Value: " << endl;
	return y;
}

int main() {
	Line y;
	y.Read();
	y.Display();

	cout << " y = " << y.function() << endl << endl;

	double A, B, x;

	cout << "Value:" << endl << endl;
	cout << " A = "; cin >> A;
	cout << " B = "; cin >> B;
	cout << " x = "; cin >> x;

	y = makeLine(A, B, x);
	y.Display();

	cout << " y = " << y.function() << endl;
	cin.get();

	return 0;
}