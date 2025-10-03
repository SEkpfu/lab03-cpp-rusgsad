#include <iostream>
using namespace std;

int main() 
{
    setlocale (LC_ALL, "ru_RU.UTF-8");
    int n;
    cout << "n = ";
    cin >> n;

    if (n % 2 != 0)
    {
        cout << "'n' должно быть чётным числом!";
        return 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

        if ((i + j) % 2 == 0) 
        {
            cout << "o ";  // белая клетка
        } else 
        {
            cout << "* ";  // черная клетка
        }

        }
        cout << endl;
    }
    return 0;
}