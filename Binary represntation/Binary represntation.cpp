// Binary represntation.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Function that takes in an int value and returns a 32 bit represenation of that int value.
void binary(int n) {
	
	int rem; // Declare the remainder
	string bin; // Declare the initial binary
	string result; // Declare the return result

	// Algarithm that divides the current parameter (n) by 2
	while (n) {
		rem = n % 2; // Store the remainder of n, this is the current bit within the binary representation
		n /= 2; // Divide n by 2
		bin += to_string(rem); // Add the remainder to the binary variable
	}

	reverse(bin.begin(), bin.end()); // The binary representation is backwards as part of the above iteration; Therefore reverse it

	for (int i = 0; i < 32 - bin.length(); i++) {
		result += '0'; // Add the amount of zeroes that make the difference of 32 - the length of the bin variable
	}

	cout << "32 bit binary representation is: " << result << bin << endl;
} 


// Function that takes a binary representation as a string and prints out the integer value of that representation
void num(string binary) {

	int result = 0; // Declare result to be printed at the end of the function

	for (int i = 0; i < binary.length(); i++) {
		// Iterate the input and add to result: the value at the current position * 2 to the power of the length of the input - the iterater (opposite of current position)
		result += (binary[i] - '0') * pow(2, (binary.length()-1)-i); 
	}

	cout << "The integer value of the binary input is: " << result << endl;
}


int main()
{
	// Call the binary function and include the integer input
	binary(256);
	binary(1);
	binary(4);
	
	// Call the num function and include the binary string input
	num("100000000");
	num("001");
	num("100");
}