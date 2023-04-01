// Binary represntation.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

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

int main()
{
	// Call the function and include the integer input
	binary(1);
	binary(2);
	binary(3);
	binary(4);
	binary(456789);
	binary(101112);
	binary(131415);
	binary(203142);
}