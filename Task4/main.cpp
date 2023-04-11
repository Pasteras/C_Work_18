//Write a function that displays a rectangle with height N and width K on the screen

#include <iostream>

using namespace std;

void Pramokutnik(int len, int with)
{
    for(int i = 0;i <= with;i++)
    {
        cout << "*";
    }
    
    cout << endl;
    
    for(int i = 0;i < len;i++)
    {
        cout << "*";
        for(int j = 1;j < with;j++)
        {
            cout << " ";
        }
        cout << "*" << endl;
    }
    
    for(int i = 0;i <= with;i++)
    {
        cout << "*";
    }
    
    cout << endl << endl;
}

int main()
{
    Pramokutnik(5, 8);
}
