#include <iostream>
#include "rational.h"

using namespace std;

int main(){
	Rational a(1, 4);
	cout << (a + Rational(2, 4)) << endl;
	cout << (a - Rational(2, 4)) << endl;
	cout << (a * Rational(2, 4)) << endl;
	cout << (a / Rational(2, 4)) << endl;
	cout << "---------\n";
	cout << (a + 5) << endl;
	cout << (a - 5) << endl;
	cout << (a * 5) << endl;
	cout << (a / 5) << endl;
	cout << "---------\n";
	cout << (a == Rational(2, 4)) << endl;
	cout << (a != Rational(2, 4)) << endl;
	cout << (a < Rational(2, 4)) << endl;
	cout << (a > Rational(2, 4)) << endl;
	cout << (a >= Rational(2, 4)) << endl;
	cout << (a <= Rational(2, 4)) << endl;
	cout << pow(a, 10) << endl;
	
}