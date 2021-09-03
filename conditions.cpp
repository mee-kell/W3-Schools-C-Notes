#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	
	// Use if, else, else if statements
	if (20 > 18) {
		cout << "20 is greater than 18.\n";
	} else if (20 < 18) {
		cout << "20 is less than 18.\n";
	} else {
		cout << "20 is equal to 18.\n";
	}

	// Ternary operator
	// variable = (condition) ? expressionTrue : expressionFalse;
	int time = 20;
	string result = (time < 18) ? "Good day.\n" : "Good evening.\n";

	// Switch statement
	int day = 4;
	switch (day) {
		case 1:
			cout << "Monday\n";
			// break ignores execution of rest of code
			break;
		case 2:
			cout << "Tuesday\n";
			break;
		case 3:
			cout << "Wednesday\n";
			break;
		case 4:
			cout << "Thursday\n";
			break;
		case 5:
			cout << "Friday\n";
			break;
		// no case match
		default:
			cout << "Weekend!\n";
	}

	// while loop
	int i = 0;
	while (i < 5) {
		cout << i << " ";
		i++;
	}

	// do/while loop
	i = 0;
	do {
		cout << i << " ";
		i++;
	}
	while (i < 5);

	// for loop
	// for (initial execution; condition; after execution)
	for (int i = 0; i < 5; i++) {
		cout << i << " ";
	}

	// Use break and continue in loops
	for (int i = 0; i < 5; i++) {
		if (i == 2) {
			continue;
		}
		if (i == 4) {
			break;
		}
		cout << i << " ";
	}

	// Declare array with type, name and #elements
	string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
	// Access elements by index
	cout << cars[0] << "\n";
	// Change elements by index
	cars[0] = "Opel";

	// Loop through array
	for (int i = 0; i < 4; i++) {
		cout << cars[i] << "\n";
	}

	// If you do not specific array size, it will only be as big as the elements that are inserted
	string fruit[] = {"Apples", "Pears", "Bananas"}; // size is always 3

	// Reference variable created with &, points to another variable
	string food = "Pizza";
	string &meal = food;
	cout << ((food == meal) ? food : "different") << "\n";

	// Get memory address of variable
	cout << &food << "\n";

	// Pointer (*) stores memory address as its value
	// Type of pointer must match type of variable
	string* ptr = &food;
	cout << "Memory address: " << ptr << "\n";

	// Use pointer to get value of variable
	cout << "Value at memory address: " << *ptr << "\n";

	/* 
	When used in declaration (string* ptr), * creates a pointer variable.
	When not used in declaration, * act as a dereference operator. 
	*/

	// Modify pointer value (variable value)
	*ptr = "Hamburger";
	cout << "New pointer value: " << *ptr << "\n";
	cout << food << "\n";

}