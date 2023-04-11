//Write a function that takes a list of strings and returns
//a list of those strings that are less than or equal
//to 5 characters long

#include <iostream>

using namespace std;

void Str(string arr[], int SIZE)
{
    for(int i = 0;i < SIZE; i++)
    {
        if(arr[i].length() <= 5)
        {
            cout << arr[i] << endl;
        }
    }
}

int main()
{
    const int SIZE = 5;
    string arr[5] {"Andrii", "Maks", "Arsen", "Anna", "Anasteysha"};
    for(int i = 0;i < SIZE; i++)
    {
        cout << arr[i] << endl;
    }
    cout << "\n\n\n";
    Str(arr, SIZE);
}
