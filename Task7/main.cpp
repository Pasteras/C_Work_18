//Write a function that reverses the order of the elements of the array passed to it

#include <iostream>

using namespace std;


void Revers(int arr[], int SIZE)
{
    for(int i = SIZE - 1; i >= 0;i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    const int SIZE = 10;
    int arr[SIZE] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //int rs = Revers(arr, SIZE);
    Revers(arr, SIZE);
    for(int i = 0;i < SIZE;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
