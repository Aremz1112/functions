#include <iostream>
using namespace std;

double division(double x, double y) {
	if (y==0) {
	   cout<"Error: Division by zero is not allowed." << endl;
	   return 0;
	}
	return x / y
}
int main () {
	double x, / y;
	
	cout << "Enter two numbers: ";
	cin >> x >> y;

	double result = divide (x, y);
	
	cout << "Division result: " << result << endl;
	return 0;
}

