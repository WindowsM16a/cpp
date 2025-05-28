#include <iostream>
using namespace std;

// Write a c++ for implementation for a linear search.

int main()
{
    int myArray[10] = {1, 2, 3, 4, 5, 8, 7, 6, 9, 10};
    int myArrayLength = sizeof(myArray) / sizeof(myArray[0]);
    int searchValue;
    bool found = false;

    cout << "Enter the value whose index you want to find" << endl;

    cin >> searchValue;

    for (int i = 0; i < myArrayLength; i++)
    {
        if (myArray[i] == searchValue)
        {
            cout << "Found " << searchValue << " at index " << i << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Your search value: " << searchValue << " was not found in the array." << endl;
    }
}