//Imagine that a snail climbs a tree a foot every day.
//The snail then slides down b feet each night.
//The height of the tree is h feet.
//Write a function that returns the number of days
//it will take the snail to reach the top of the tree.
//If the snail cannot reach the top of the tree, output the message Impossible.

#include <iostream>

using namespace std;

void Ravlyk(int way_day, int way_nigth, int length_tree)
{
    int zagal1 = 0;
    int zagal2 = 0;
    int day = 0;
    while(zagal2 <= 10)
    {
        zagal1 += way_day - way_nigth;
        zagal2 = zagal1 + way_day;
        day++;
        if(way_nigth >= way_day)
        {
            cout << "Impossible" << endl;
            break;
        }
    }
    if(way_day > way_nigth)
    {
        cout << "The snail will reach the end of the tree in " << day << " day." << endl;
    }
}

int main()
{
    const int length_tree = 10;
    const int way_nigth = 3;
    const int way_day = 4;
    Ravlyk(4, 3, 10);
}
