#include <iostream>
using namespace std;

int main () 
{
    int n;
    double sum = 0;
    cout << "n = ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / (2.0 * i);
    }

    cout << "S = " << sum;

    return 0;
}
