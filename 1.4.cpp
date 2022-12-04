#include <iostream>
#include <cmath>
using namespace std;
//Руда Єлизавета ФІТ 1-4 В12


int main()
{
    setlocale(0, ".1251");

    double z, i, a, b, k;
    a = 0;
    i = 12; //номер варіанту
    k = i;
    while (k <= i + 5)
    {
        a = a + (1 / (((pow(sin(k), 3)) + 5.4) - log10(abs(k))));
        k++;
    }
    i = 12;
    k = i;
    b = 0;
    while (k <= i + 6)
    {
        b = b + (1 / (((pow(sin(k), 3)) + 5.4) - log10(abs(k))));
        k++;
    }
    z = pow(b, a);
    cout << "Значення змінної z = " << z << endl;
}
