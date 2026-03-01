#include <iostream>
using namespace std;

double multiply(double a, double b, double c) {
	return a * b *c;
}
int main () {
	double a, b, c
	
	cout << "Enter three numbers: ";
	cin >> a >> b >> c;

	double result=multiply (a, b, c);

	cout << "Multiplication result: " << result << endl;
return 0;
}
