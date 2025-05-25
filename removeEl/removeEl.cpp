#include <iostream>
using namespace std;

// Write a c++ code to delete an element in an array also perform an analysis of the algorithm that you write.

int main()
{
    int myArray[] = {1, 2, 3, 4, 5};
    int size = 5;
    int deleteValue;

    cout << "Enter the value you want to delete" << endl;

    cin >> deleteValue;

    int position = -1;

    for (int i = 0; i < size; i++)
    {
        if (myArray[i] == deleteValue)
        {
            position = i;
            break;
        }
    }

    if (position == -1)
    {
        cout << "The value is not in the array" << endl;
    }
    else
    {
        for (int i = position; i < size - 1; i++)
        {
            myArray[i] = myArray[i + 1];
        }
        size--;

        cout << "New array" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << myArray[i] << endl;
        }
    }
}
