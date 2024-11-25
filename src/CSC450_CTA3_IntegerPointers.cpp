//============================================================================
// Name        : CSC450_CTA3_IntegerPointers.cpp
// Author      : Abnel Franquez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
    Program: Integer Pointer and Dynamic Memory Management
    Purpose:
    This program asks the user to enter three integer values and stores them in three different variables.
    For each variable, the program creates an integer pointer that allocates dynamic memory using the `new` operator.
    It then displays the contents of the variables and the values stored at the memory locations pointed to by the pointers.
    Finally, the program ensures proper memory management by deallocating the dynamic memory using the `delete` operator.
*/

#include <iostream>

using namespace std;

int main() {
    // Declare three variables to store user input
    int var1, var2, var3;

    // Ask the user to enter three integer values
    cout << "Enter the value for the first integer: ";
    cin >> var1;

    cout << "Enter the value for the second integer: ";
    cin >> var2;

    cout << "Enter the value for the third integer: ";
    cin >> var3;

    // Create pointers to dynamically allocate memory for the integers
    int* ptr1 = new int(var1);
    int* ptr2 = new int(var2);
    int* ptr3 = new int(var3);

    // Display the contents of the variables
    cout << "\nContents of variables:" << endl;
    cout << "Variable 1 = " << var1 << ", Variable 2 = " << var2 << ", Variable 3 = " << var3 << endl;

    // Display the values stored at the memory locations pointed to by the pointers
    cout << "\nValues pointed to by the pointers:" << endl;
    cout << "*Pointer 1 = " << *ptr1 << ", *Pointer 2 = " << *ptr2 << ", *Pointer 3 = " << *ptr3 << endl;

    // Display the memory addresses of the pointers
    cout << "\nMemory addresses of pointers:" << endl;
    cout << "ptr1 = " << ptr1 << ", ptr2 = " << ptr2 << ", ptr3 = " << ptr3 << endl;

    // Deallocate the dynamic memory
    delete ptr1;
    delete ptr2;
    delete ptr3;

    cout << "\nDynamic memory has been deallocated." << endl;

    return 0;  // Indicate successful program termination
}
