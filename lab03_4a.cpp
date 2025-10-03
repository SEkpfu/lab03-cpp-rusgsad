#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double x;
    cout << "x = ";
    cin >> x;

    int n;
    cout << "n = ";
    cin >> n;

    double result = cos (x);

    for (int i = 2; i <= n; i++)
    {
        result = cos (x + result);
    }

    cout << "Result = " << result;

    return 0;
}