//Write a function for the quadratic equation (ax2 + bx + c = 0).
//The function returns one or two roots of the equation,
//or no roots if there are no roots. A, b and c are
//passed to the function.
//Input: 1 -2 1
//       2 5 -3
//        2 2 2

//Output: 1 / -3 / 0.5 no roots

#include <iostream>
#include <math.h>

using namespace std;
 
void Rivn (double a, double b, double c)
{
        double x1 = 0, x2 = 0, d = 0;
        d = b * b - 4 * a * c;
        if(d < 0)
        {
            cout<<"No roots";
        }
        else
        {
            if(d == 0)
            {
                x1 =- b/(2 * a);
                cout << "The quadratic equation has a unique solution " << x1;
            }
            else
            {
                x1 =- b / (2 * a) - (sqrt (d)) / (2 * a);
                x2 =- b / (2 * a) + (sqrt (d)) / (2 * a);
                cout << "Квадратное уравнение имеет два разных корня\n";
                cout << "X1 = " << x1 << "\n";
                cout << "X2 = " << x2 << "\n";
            }
        }
}

int main()
{
    //int i = 0;
    double a = 0, b = 0, c = 0;
 
    cout<<"Enter the first coefficient of equation A: ";cin>>a;
    cout<<"Enter the second coefficient of equation B: ";cin>>b;
    cout<<"Enter the third coefficient of equation C: ";cin>>c;
    Rivn(a, b, c);
    cout << "\n";
}


