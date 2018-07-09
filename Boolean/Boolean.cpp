/*
 * Boolean.cpp
 *
 *  Created on: Jul 8, 2018
 *      Author: Nathaniel-Joel Parizi
 */
//  George Boole mathematician, logician, and philospher from England
//  founded what is today reffered to as Boolean Logic which has shaped
//  the information age and computer science.
//  In C++ booleans are considered true if they have a value of 1
//  If the boolean is false the value is equal to 0.
//***************************************
#include <iostream>

using namespace std;

int main() {

	bool bVal = true; // 1
	bool bVal2 = false; // 0
	cout << "In C++ true is: (" << bVal << "), and " << flush;
	cout << "false is considered to be: (" << bVal2 << ")" << endl;

	//*****************************************Characters
	// http://www.asciitable.com/   -  ASCII
	//*****************************************

	char cVal = 'g'; // 1 byte of memory (8 bits)

	cout << cVal << endl;
	int sizeOfC = sizeof(char) * 8;

	cout << "Size of char is " << sizeof(char) << " bytes. Which is " << sizeOfC
			<< " bits"
					" of memory." << endl;

	wchar_t wCharVal = 'z';
	cout << "Size of wchar_t is " << sizeof(wchar_t)
			<< " bytes. The ASCII value is " << wCharVal << "." << endl;

	return 0;

}

