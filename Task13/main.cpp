//The function should receive: the number of people and the number of slices in the pizza.
//Then the program shouldoutput the minimum number of pizzas (not zero) so that everyone
//has an equal number of slices and no there is no extra left.
//Input: 12 8
//Output: 3

#include <iostream>

using namespace std;

void Party(int people, int pizza, int number_of_pizzas, int piece)
{
    while(true)
    {
        if(pizza / piece == people)
        {
            break;
        }
        pizza += 8;
        number_of_pizzas++;
        piece++;
    }
    cout << "We need " << number_of_pizzas << " pizzas." << endl;
    cout << "Each get " << piece << " pieces." << endl;
}

int main()
{
    int people = 12;
    int pizza = 8;
    int number_of_pizzas = 1;
    int piece = 0;
    Party(people, pizza, number_of_pizzas , piece);
}
