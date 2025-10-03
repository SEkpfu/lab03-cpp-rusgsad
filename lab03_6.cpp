#include <iostream>
using namespace std;

int main()
{
    setlocale (LC_ALL, "ru_RU.UTF-8");
    int total = 0;
    int even = 0;
    string input;

    cout << "Введите целые числа (для остановки ввести команду *stop*):\n";

    while (true)
    {
        cin >> input;

        if (input == "stop")
        {
            break;
        }

        int number = stoi(input);
        total++;

        if ((number & 1) == 0) 
        {
            even++;
        }
    }

    if (total == 0)
    {
        cout << "Вы должны ввести хотя бы одно число!";
    }
    else
    {
        cout << "\n=== РЕЗУЛЬТАТЫ ===\n";
        cout << "Общее кол-во введёных чисел: " << total << endl;
        cout << "Кол-во четных чисел: " << even << endl;
    }
    return 0;
}