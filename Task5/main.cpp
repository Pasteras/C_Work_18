//Write a function that checks whether the number passed to it is prime. Numeric
//is called prime if it is divisible without a remainder only by itself and by
//unit

#include <iostream>

using namespace std;

void Prost(int num)
{
   if(num % 2 == 0)
   {
       cout << "Number is prime " << endl;
   }
   else
   {
       cout << "Number is not prime " << endl;
   }
}

int main()
{
    Prost(6);
}
