#include "line.h"
#include <cmath>
#include <iostream>

using namespace std;

bool Line::Init(double A, double B, double x) {
	if (A != 0) {
		first = A;
		second = B;
		x1 = x;
		return true;
	}
	else {
		return false;
	}
}

void Line::Read() {
	double A, B, x;
	do {
		cout << "Value:" << endl;
		cout << " A = "; cin >> A;
		cout << " B = "; cin >> B;
		cout << " x = "; cin >> x;
	} while (!Init(A, B, x));
}

void Line::Display() {
	cout << endl;
	cout << " A = " << first << endl;
	cout << " B = " << second << endl;
	cout << " x = " << x1 << endl;
}

double Line::function() {
	return first * x1 + second;
}