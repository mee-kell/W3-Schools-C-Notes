#include <iostream>
#include <string>
using namespace std;

// OOP: create objects that contain data (attributes) + functions (methods)
// Class = template for objects
// Object = instance of a class

class MyClass {
	// Access specifier: public, private, protected
	public:							
		int myNum;				// Attribute (int variable)
		string myString;	// Attribute (string variable)

		// Define method inside class
		void myMethod() {
			cout << "Hello World!\n";
		}

		// Declare method inside class
		void outerMethod();
		int speed(int maxSpeed);

		// Constructor: special method automatically called when object is created
		MyClass(int arg1, string arg2) {
			cout << "Created object.\n";
			// Parameters: set initial values for attributes
			myNum = arg1;
			myString = arg2;
		}
		// Constructor can be defined outside class like method
};

// Define method outside class using :: scope resolution operator
void MyClass::outerMethod() {
	cout << "Hello again!\n";
}
// Methods can have parameters
int MyClass::speed(int maxSpeed) {
	return maxSpeed;
}

/* ------- */


// Encapsulation: ensure sensitive data is hidden
// Better control of data: change one part of code without affecting other parts
class Employee {
	// Private members cannot be directly accessed, viewed or changed --> do not get inherited
	private:
		int salary;

	// Protected members: similar to private, but get inherited
	protected:
		int bonus;

	public:
		// Setter method
		void setSalary(int s) {
			salary = s;
		}
		// Getter
		int getSalary() {
			return salary;
		}
};

/* ------- */

// Derived class (child) inherits from base class (parent)
class Cashier: public Employee {
	// Additional attributes + methods
	public:
		string boss = "Manager";
};

class Person {
	public:
		string name;
};

// Multilevel inheritance: derived from child
// Multiple inheritance: derived from multiple base classes
class Intern: public Cashier, public Person {
	public:
		string boss = "Bobby";
		int phone = 12345678;
};

int main() {

	// Create an object of MyClass with attribute values
	MyClass myObj(18, "updated");

	// Access attributes and set values
	myObj.myNum = 15;
	myObj.myString = "Some text";
	cout << myObj.myNum << myObj.myString << "\n";

	// Call method inside class
	myObj.myMethod();
	myObj.outerMethod();
	myObj.speed(200);

	/* ------- */

	Employee worker1;
	worker1.setSalary(50000);
	cout << worker1.getSalary();

	/* ------- */

	Cashier bobby;
	bobby.setSalary(10000);
	cout << "Bobby's salary: " << bobby.getSalary() << "\n";
	cout << "Bobby's boss: " << bobby.boss << "\n";

	Intern katie;
	katie.setSalary(5000);
	cout << "Katie's salary: " << katie.getSalary() << "\n";
	cout << "Katie's phone: " << katie.phone << "\n";

	return 0;

}