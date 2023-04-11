//Write a function to find the largest of two numbers

#include <iostream>

using namespace std;

int Max(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    return b;
}

int main()
{

    int result = Max(2, 5);
    cout << "Maximum is: " << result << endl;
}
