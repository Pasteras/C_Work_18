//Write a function that determines the arithmetic
//mean of the elements of the array passed to it

#include <iostream>

using namespace std;

void Aref(int arr[], int SIZE)
{
    int sum = 0;
    for(int i = 0; i < SIZE; i++)
    {
        sum += arr[i];
    }
    sum /= SIZE;
    cout << "Arithmetic mean: " << sum << endl;
}

int main()
{
    const int SIZE = 10;
    int arr[SIZE]{8, 5, 3, 77, 32, 23, 65, 23, 1, 65};
    Aref(arr, SIZE);
}
