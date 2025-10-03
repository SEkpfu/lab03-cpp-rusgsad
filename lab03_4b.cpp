#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() 
{
    double x;
    cout << "x = ";
    cin >> x;

    int n;
    cout << "n = ";
    cin >> n;

    double result = pow (x, 2);

    for (int i = 2; i <= n; i++)
    {
        result = pow (x + result, 2);
    }

    cout << "Result = " << result;

    return 0;
}