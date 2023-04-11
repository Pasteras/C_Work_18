//Write a function that determines the minimum and maximum (value and number)
//of the elements of the array passed to it

#include <iostream>

using namespace std;

int Max(int arr[],int SIZE)
{
    int max = arr[0];
    for(int i = 0;i < SIZE;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int Min(int arr[],int SIZE)
{
    int min = arr[0];
    for(int i = 0;i < SIZE;i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    const int SIZE = 5;
    int arr[SIZE] {1, 2, 3, 4, 5};
    int result1 = Max(arr, SIZE);
    int result2 = Min(arr, SIZE);
    cout << "Max: " << result1 << endl;
    cout << "Min: " << result2 << endl;
}
