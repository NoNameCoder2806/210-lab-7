// COMSC-210 | Lab 7 | Dat Hoang Vien
// IDE used: Visual Code Studio

// Libraries
#include <iostream>
#include <string>
using namespace std;

// Constants
const int ARRAY_SIZE = 5;

// Function prototypes
string* reverseArray(string*);      // Reverse the elements of the array

void displayArray(string*);         // Output the elements of the array to the console

// Main function
int main()
{
    // Dynamically declare a string array that holds 5 string elements
    string* arr = nullptr;
    arr = new string[ARRAY_SIZE];

    // Assign 5 names to the array
    arr[0] = "Hoang";
    arr[1] = "Adam";
    arr[2] = "Brian";
    arr[3] = "Victor";
    arr[4] = "Aiden";

    // Display the original array
    cout << "Original array: ";
    displayArray(arr);

    // Create a new string array to hold the reversed version of the array
    string* rev = reverseArray(arr);

    // Display the revsered array
    cout << "Reversed array: ";
    displayArray(rev);

    // Delete the pointers and free memory
    delete[] arr;
    delete[] rev;

    return 0;
}

// Function implementations
/*
    revsereArray()
    Reverse the elements of the array
    Arguments: a pointer to a string array
    Returns: a string array pointer
*/
string* reverseArray(string* str)      // Reverse the order of the array elements
{
    // Declare another pointer to store the reverse array
    string* rev = nullptr;
    rev = new string[5];

    // Iterate through the array starting from the back and swap the elements
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        // Assign the values to the reverse array
        *(rev + ARRAY_SIZE - i - 1) = *(str + i);
    }

    return rev;
}

/*
    displayArray()
    Display the content of a string array
    Arguments: a pointer to a string array
    Returns: nothing
*/
void displayArray(string* str)      // Output the elements of the array to the console
{
    // Iterate 5 times and output the array elements
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        // Display the value
        cout << *(str + i);

        // If this is not the final element
        if (i != ARRAY_SIZE - 1)
        {
            // We add a comma and a space
            cout << ", ";
        }
    }

    // Enter a new line after displaying all the elements
    cout << endl;
}