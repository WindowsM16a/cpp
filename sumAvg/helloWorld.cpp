#include <iostream>
using namespace std;

// Write a c++ code to traverse an array of 100 integer values and to calculate the sum, average of the integer values as well as count all positive values in the array

int main()
{
    cout << "Hello World" << endl;

    int numbers[100] = {-50, -49, -48, -47, -46, -45, -44, -43, -42, -41, -40, -39, -38, -37, -36,
                        -35, -34, -33, -32, -31, -30, -29, -28, -27, -26, -25, -24, 23, -22, -21, -20,
                        -19, -18, -17, -16, -15, -14, -13, -12, 11, -10, -9, -8, -7, -6, -5, -4, -3,
                        -2, -1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
                        21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39,
                        40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};

    int numbersLength = sizeof(numbers) / sizeof(numbers[0]);

    int sum = 0;

    int positiveNums = 0;

    for (int i = 0; i < numbersLength; i++)
    {
        sum += numbers[i];
        if (numbers[i] >= 0)
        {
            positiveNums++;
        }
    }

    double average = (double)sum / (double)numbersLength;

    cout << sum << endl;
    cout << average << endl;
    cout << positiveNums << endl;
}
