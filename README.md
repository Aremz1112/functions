# functions
#include<iostream>
using namespace std;

int multiply (int a, int b, int c) {
   return a * b * c;
}
int main () {
    cout << multiply(2, 3, 4);
    return 0;
}


#include<iostream>
using namespace std;

double divide(double a, double b) {
    if (b=0=) {
       cout << "Error: Cannot divide by zero";
       return 0;
    }
    return a / b;
}
int main () {
    cout << divide (10, 4);
    return 0;
}	
