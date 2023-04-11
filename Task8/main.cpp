//Write a function that accepts a list of integers
//and returns a list of the same numbers, but without repetitions

#include <iostream>

using namespace std;

void Mas(int arr[], int SIZE)
{
    int cont = 0;
    int* arr_new = new int [SIZE];
    cout << "New: ";
    for(int i = 0; i < SIZE; i++)
    {
        for(int j = i + 1; j < SIZE; j++)
        {
            if(arr[i] == arr[j])
            {
                arr[j] = 0;
            }
        }
    }
    
    for(int i = 0;i < SIZE;i++)
    {
        if(arr[i] == 0)
        {
            cont++;
        }
    }
    
    for(int i = 0, a = 0;i < SIZE;i++)
    {
        if(arr[i] != 0)
        {
            arr_new[a] = arr[i];
            a++;
        }
    }
    
    for(int i = 0;i < SIZE - cont;i++)
    {
        cout << arr_new[i] << " ";
    }
    
    cout << endl;
}

int main()
{
    const int SIZE = 7;
    int arr[SIZE] {1, 22, 65, 22, 54, 1, 3};
    cout << "Old: ";
    for(int i = 0;i < SIZE;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    Mas(arr, SIZE);
}
