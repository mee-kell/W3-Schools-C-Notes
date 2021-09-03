// Header file library lets us work with input and output objects
#include <iostream>
// Additional header file for strings
#include <string>
// Additional header for maths
#include <cmath>
// Use names for objects and variables from standard library
using namespace std;

// Function main
int main() {

	/* Object + insertion operator: prints text.
	You can write this as std::cout if you omit (line 4) standard namespace library */
	cout << "Hello World! \n\n";

	// Insert new line using \n or << endl
	cout << "I am learning C++" << endl;

	// Every C++ statement ends with a semicolon

	// Assign type variable = value;
	int myNum = 15; // 4 bytes
	float myFloat = 5.99; // 4 bytes
	double myDouble = 12E4; // 8 bytes
	cout << myDouble << endl;

	// Char must be surrounded by single quotes
	char myLetter = 'D';
	// ASCII chars are allowed too
	char a = 65;
	cout << a << endl;

	// String must be surrounded by double quotes
	string myText = "Hello\n";

	// Booleans return 1 for true and 0 for false
	bool myBoolean = true;
	cout << myText << myBoolean;

	// Cannot add a number to a string
	cout << "My name is " << myLetter << " and I am " << myNum << " years old.\n";

	// Concatenate strings with + or append()
	string firstName = "John ";
	string lastName = "Doe";
	string fullName = firstName + lastName;
	// Append() is faster
	string appendedName = firstName.append(lastName);

	// Get length of a string using length() or size()
	cout << "Length of fullName: " << fullName.length() << endl;
	cout << "Length of appendedName: " << fullName.size() << endl;

	// Access/change characters in a string using index []
	char firstLetter = fullName[0];
	fullName[2] = 'a';
	cout << fullName << endl;

	// To declare many variables of the same type, use a comma-separated list
	int x = 5, y = 6, z = 50;
	cout << x + y + z << endl;

	// Use increments and decrements
	++x;
	--x;
	// Use assignment operators
	x += 5;
	x *= 3;

	// Constant variables are immutable
	const float PI = 3.14;

	// Comparison operators
	cout << (x > y) << endl;

	// Logical operators
	cout << (true && true);
	cout << (true || false);

	// Use max(x, y) or min(x, y) to find highest or lowest value
	cout << max(5, 10);
	cout << min(5, 10);

	// Use cmath functions
	cout << sqrt(64);
	cout << round(2.5);
	cout << log(2);

	// Get input from user using cin >>
	int w, u, sum;
	cout << "\nType a number: ";
	cin >> w;
	cout << "Type another number: ";
	cin >> u;
	sum = w + u;
	cout << "Your sum is: " << sum;

	// cin considers a space as a terminating characters
	// Use getline() to read a line of text
	string yourName;
	cout << "\nType your name: ";
	// Note: avoid putting getline after cin, or use cin.ignore()
	cin.ignore();
	getline (cin, yourName);
	cout << "Your name is: " << yourName;

}