#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// declare a function using ()
// void means that there is no return value
void myFunction() {
	// define body of function
	cout << "I just got executed!";
}

void declared(string fname, int age);

// Default parameter; optional arguments
void defaultParam(string country = "Norway");

// Return values, specify data type
int myFunction(int x) {
	return 5 + x;
}

// Pass references to change the value of arguments
void swapNums(int &x, int &y) {
	int z = x;
	x = y;
	y = z;
}

// Function overloading: multiple functions have the same name with different parameters
int plusFunc(int x, int y) {
	return x + y;
}

double plusFunc(double x, double y) {
	return x + y;
}

// Predefined function main()
// Declare all functions before main()
int main() {
	// call a function
	myFunction();
	declared("Michelle", 18);
	defaultParam();

	// Demonstrate reference function
	int firstNum = 10, secondNum = 20;
	cout << "Before swap: " << "\n";
	cout << firstNum << secondNum << "\n";
	swapNums(firstNum, secondNum);
	cout << "After swap: " << "\n";
	cout << firstNum << secondNum << "\n";

	// Function overloading - same thing!
	cout << "Int: " << plusFunc(8, 5) << "\n";
	cout << "Double: " << plusFunc(4.3, 6.26) << "\n";

	return 0;
}

// Split function declaration and definition
void declared(string fname, int age) {
	// Contains parameters: takes a string called fname
	cout << "This is the definition!\n";
	cout << fname << " is " << age << "years old!\n";
}

void defaultParam(string country) {
	cout << "Country is: " << country << "\n";
}