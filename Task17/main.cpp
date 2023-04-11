//Write a function that determines the number of positive,
//negative and zero elements of the array passed to it.

#include <iostream>

using namespace std;

void Sum(int arr[], int SIZE)
{
    int plus = 0;
    int minus = 0;
    int zero = 0;
    
    for(int i = 0; i < SIZE; i++)
    {
        if(arr[i] > 0)
        {
            plus++;
        }
        if(arr[i] < 0)
        {
            minus++;
        }
        if(arr[i] == 0)
        {
            zero++;
        }
    }
    cout << "Positive numbers: " << plus << endl << "Negative numbers: " << minus <<
    endl << "Zero numbers: " << zero << endl;
}

int main()
{
    const int SIZE = 15;
    int arr[SIZE]{15, 23, -32, 0, 1, -12, 78, 44, 0, -54, 40, 32, -44, -23, -15};
    Sum(arr, SIZE);
}
