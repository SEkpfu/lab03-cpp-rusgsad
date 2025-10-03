#include <iostream>
#include <limits>
using namespace std;

int main ()
{
    setlocale (LC_ALL, "ru_RU.UTF-8");
    int max_int = numeric_limits<int>::max();
    int min = max_int;
    cout << "Введите семь целых чисел:\n";
    for (int i = 1; i <= 7; i++)
    {
        int x;
        cin >> x;
        if (x < min)
        {
            min = x;
        }
    }
    cout << "Наименьшее число:" << min;
    return 0;
}