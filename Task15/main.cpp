//Write a function that takes two dates (that is, the function takes six parameters)
//and calculates the difference in days between those dates. To accomplish this task,
//you must also write a function that determines whether a year is a leap year.

#include <iostream>

using namespace std;



void Date(int y, int m, int d, int y1, int m1, int d1)
{
    int years = (y - y1) * 365;
    int month = (m - m1) * 28;
    int days = d + d1 + month + years - 1;
    
    cout << "\n\n";
    cout << "First date " << d << "." << m << "." << y << endl;
    cout << "Second date " << d1 << "." << m1 << "." << y1 << endl;
    cout << "\n";
    cout << "Days: " << abs(days) << endl;
}

int main()
{
    int d, m, y, d1, m1, y1;
    cout << "Enter the first date" << endl;
    cout << "Enter the year: ";
    cin >> y;
    cout << endl << "Enter the month: ";
    cin >> m;
    cout << endl << "Enter the day: ";
    cin >> d;
    
    cout << "\n\n";
    
    cout << "Enter a second date" << endl;
    cout << "Enter the year: ";
    cin >> y1;
    cout << endl << "Enter the month: ";
    cin >> m1;
    cout << endl << "Enter the day: ";
    cin >> d1;
    
    Date(y, m, d, y1, m1, d1);
    
}



