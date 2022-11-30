#include <iostream>
#include <cmath>
using namespace std;
//Руда Єлизавета ФІТ 1-4 В12


int main()
{
    setlocale(0, ".1251");

    double R, r, x, y, p;
    cout << "Введіть значення x";
    cin >> x;

    cout << "Введіть значення y";
    cin >> y;

    cout << "Чому дорівнює радіус не заштрихованих кіл?";
    cin >> R;
    r = -1 * R;
    if ((x <= R && x >= r) && (y <= R && y >= r) && !((pow(x + R, 2) + pow(y - R, 2) <= R * R) || (pow(x - R, 2) + pow(y + R, 2) <= R * R)))
    {
        cout << "Точка входить в заштриковану фігуру :)";
    }
    else
    {
        cout << "Точка не входить в заштриховану фігуру :(";
    }

}
