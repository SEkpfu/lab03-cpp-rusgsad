#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    setlocale (LC_ALL, "ru_RU.UTF-8");
    int n;
    cout << "Введите кол-во вершин n-угольника: ";
    cin >> n;

    double first_x,  first_y, prev_x, prev_y, next_x, next_y;
    double perimeter = 0.0;

    cout << "\n=== Координаты точек n-угольника ===\n";
    cout << "Вершина #1\n";
    cout << "x = ";
    cin >> first_x;
    cout << "y = ";
    cin >> first_y;
    prev_x = first_x;
    prev_y = prev_y;

    for (int i = 2; i <= n; i++)
    {
        cout << "Вершина #" << i << endl;
        cout << "x = ";
        cin >> next_x;
        cout << "y = ";
        cin >> next_y;
        
        perimeter += sqrt(pow(next_x - prev_x, 2) + pow(next_y - prev_y, 2));

        prev_x = next_x;
        prev_y = next_y;
    }

    perimeter += sqrt(pow(first_x - prev_x, 2) + pow(first_y - prev_y, 2)); // добавляем к периметру расстояние от последней вершины до первой 
    cout << "Периметр n-угольника: " << perimeter;
    return 0;
}