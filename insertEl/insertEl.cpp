#include <iostream>
using namespace std;

// Write a c++ code to insert an element into an array also perform an analysis of the algorithm that you write.

int main()
{

    int myArray[6] = {2, 5, 3, 7, 4};
    int position, value;
    int myArrayLength = 5;

    cout << "Enter a value to insert" << endl;
    cin >> value;

    cout << "Enter the position to put" + value << endl;
    cin >> position;

    for (int i = myArrayLength; i > position; i--)
    {
        myArray[i] = myArray[i - 1];
    }

    myArray[position] = value;
    myArrayLength++;

    for (int i = 0; i < myArrayLength; i++)
    {
        cout << myArray[i] << endl;
    }
}
