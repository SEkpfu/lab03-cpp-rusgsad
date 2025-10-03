#include <iostream>
using namespace std;

int main ()
{
    setlocale (LC_ALL, "ru_RU.UTF-8");
    cout << "Введите семь целых чисел:\n";
    int negative;
    for (int i = 1; i <= 7; i++)
    {
        int x;
        cin >> x;
        if (x < 0)
            negative += 1;
    }
    cout << "Кол-во отрицательных чисел: " << negative;
    return 0;
}