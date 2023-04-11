//The function should output an electronic clock screen
//for a given value of seconds since midnight.
//Output format: h:mm:ss (possible values: [0:00:00; 23:59:59]).

#include <iostream>

using namespace std;

void Clock(int sec)
{
    int m,h=0;
    m = sec/60 % 60;
    h = sec/60/60;
    cout <<  h << ":"  << m << ":" << sec%60 << endl;
}

int main()
{
    int sec = 3200;
    Clock(sec);
}
