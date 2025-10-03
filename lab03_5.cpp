#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    double eps;
    cout << "E = ";
    cin >> eps;

    double s{};
    for (int i{1}, z = 1; 1.0 / i > eps; i += 2, z = -z)
    {
        s += (double) z / i;
    }

    cout << "s = " << s;

    return 0; 
}