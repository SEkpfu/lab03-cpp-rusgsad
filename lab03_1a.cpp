#include <iostream>
using namespace std;

int main () 
{
    double t = 0;
    cout << "t(C') = ";
    cin >> t;

    while (t < 101);
    {
        cout << t << "' Цельсия" << endl;
        cout << 9.0 / 5.0 * t + 32.0 << "' Фаренгейт" << endl; 
        t += 10;
    }
    return 0;
}