#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    double x = 0, y = 0;
    do 
    {
        y = log (x + 1) * sin (x);
        cout << x << "\t" << y << endl;
        x += 0.5;
    } while (x <= 5);
    return 0;
}