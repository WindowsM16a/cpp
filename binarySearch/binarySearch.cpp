#include <iostream>
#include <algorithm>
using namespace std;

// Write a c++ for implementation for a binary search Algorithm

void binarySearch(int target);

int main()
{
    int searchValue;
    cout << "Enter the value whose index you want to find" << endl;
    cin >> searchValue;
    binarySearch(searchValue);
}

void binarySearch(int target)
{
    int myArray[] = {1, 2, 3, 5, 7, 6, 4, 8, 9, 10, 11};
    int myArrayLength = sizeof(myArray) / sizeof(myArray[0]);
    bool found = false;

    sort(myArray, myArray + myArrayLength);

    int start = 0;
    int end = myArrayLength - 1;

    while (start <= end)
    {
        int middle = (start + end) / 2;

        if (myArray[middle] == target)
        {
            cout << "Found target index: " << middle << endl;
            return;
        }
        else if (myArray[middle] > target)
        {
            end = middle - 1;
        }
        else
        {
            start = middle + 1;
        }
    }
    cout << "Target: " << target << ", not found in the array" << endl;
}