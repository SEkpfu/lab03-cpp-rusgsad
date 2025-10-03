#include <iostream>
using namespace std;

int main ()
{
    setlocale (LC_ALL, "ru_RU.UTF-8");
    int sum;
    cout << "Введите семь целых чисел:\n";
    for (int i = 1; i <= 7; i++)
    {
        int x;
        cin >> x;
        if (x >= 10)
        {
            sum += x;
        }
    }
    cout << "Сумма двухзначных чисел: " << sum;
    return 0;
}