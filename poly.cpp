#include <iostream>
#include <string>
// Header library to work with files
#include <fstream>
/*
ofstream: creates and writes to files
ifstream: reads from files
fstream: creates, reads and writes to files
*/

using namespace std;

/* 
Polymorphism: many classes related to each other by inheritance
Uses inherited methods to perform different tasks
*/

// Base class
class Animal {
	public:
		void animalSound() {
			cout << "The animal makes a sound \n";
		}
};

// Derived classes
class Pig: public Animal {
	public:
		// Different implementation of same function
		void animalSound() {
			cout << "The pig says: oink \n";
		}
};

class Dog: public Animal {
	public:
		// Overrides original method
		void animalSound() {
			cout << "The dog says: woof \n";
		}
};

int main() {

	Animal myAnimal;
	Pig myPig;
	Dog myDog;

	// Polymorphism in action
	myAnimal.animalSound();
	myPig.animalSound();
	myDog.animalSound();

	/* ---- */

	// Create and open a text file
	ofstream MyFile("filename.txt");
	// Write to file
	MyFile << "Writing to the file here!";
	// Close the file
	MyFile.close();

	// Create string used to output text file
	string myText;
	// Read the file and output line by line
	ifstream FileToRead("filename.txt");
	while (getline (FileToRead, myText)) {
		cout << myText;
	}

	FileToRead.close();

	/* -- Exceptions -- */

	try {
		// Block of code to try
		int age = 15;
		if (age >= 18) {
			cout << "You are old enough.\n";
		} else {
			// Throw an exception if a problem arises
			throw (age);
		}
	}
	// Parameter = what is thrown
	// Use ... inside catch block if exception type is unknown
	catch (int myNum) {
		// Block of code to handle errors
		cout << "You must be at least 18 years old.\n";
		cout << "Age is: " << myNum;
	}


	return 0;
}