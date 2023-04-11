//Write a function that takes an array and sorts it.
//The sorting algorithm is your choice

#include <iostream>

using namespace std;

void Sort(int arr[], int SIZE)
{
    
    cout << "Sorted: ";
    for(int i = 0; i < SIZE - 1; i++)
    {
        for(int j = 0; j < SIZE; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    for(int i = 0;i < SIZE;i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    const int SIZE = 7;
    int arr[SIZE] {23, 55, 1, 43, 12, 65, 18};
    cout << "Standart: ";
    for(int i = 0;i < SIZE;i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    Sort(arr, SIZE);
}
