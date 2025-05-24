#include <iostream>
using namespace std;

// Write a c++ code to insert an element into an array also perform an analysis of the algorithm that you write.

int main()
{
    cout << "hey" << endl;

    int myArray[5] = {2, 5, 3, 7, 4};
    int position, value;

    int myArrayLength = sizeof(myArray) / sizeof(myArray[0]);

    cout << "Enter a value to insert" << endl;

    cin >> value;

    cout << "Enter the position to put" + value << endl;

    cin >> position;

    myArray[position] = value;

    for (int i = 0; i < myArrayLength; i++)
    {
        cout << myArray[i] << endl;
    }
}
