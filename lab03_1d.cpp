#include <iostream>
#include <cmath>
using namespace std;

int main () 
{
    for (double x = -1.5; x <= 1.5; x += 0.25)
    {
        double y;
        if (x > 1)
        {
            y = 1.0 + pow (abs (cos (x)), 1.0/2.0);
        }
        else 
        {
            if (x >= -0.5)
            {
                y = x + 1.0;
            }
            else 
            {
                y = 1.0 - x * x;
            }
        }
        cout << x << "\t" << y << endl;
    }
}