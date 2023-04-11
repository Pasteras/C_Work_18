//Write a function that calculates the factorial of the number passed to it

#include <iostream>


using namespace std;

int Fact(int a)
{
    int sum = 1;
    for(int i = 1; i <= a;i++)
    {
        sum *= i;
    }
    return sum;
}

int main()
{
    int result = Fact(5);
    cout << "Factorial num: " << result << endl;
}
