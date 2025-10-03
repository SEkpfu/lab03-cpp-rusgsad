#include <iostream>
using namespace std;

int main() 
{
    setlocale (LC_ALL, "ru_RU.UTF-8");
    int number;
    int max_value = 0;
    int count;

    cout << "=== Введите последовательность натуральных чисел (введите 0 для завершения) ===\n";

    while (true)
    {
        cin >> number;
        if (number < 0)
        {
            cout << "Натуральные числа не могут быть отрицательными!";
        }
        if (number > max_value)
        {
            max_value = number;
            count = 1;
        }
        if (number == max_value)
        {
            count++;
        }
        if (number == 0)
        {
            break;
        }
    }

    cout << "\n=== РЕЗУЛЬТАТЫ ===\n";
    cout << "Максимальное значение: " << max_value << endl;
    cout << "Кол-во элементов последовательности, равных наибольшему элементу: " << count;
    return 0;
}