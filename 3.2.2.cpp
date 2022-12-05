#include <iostream>
#include <cmath>
//Руда Єлизавета ФІТ 1-4 В12

using namespace std;


int main()
{
    setlocale(0, ".1251");

    int* mas;
    int n, i, imin = 0, firstz = 0, abssum = 0, j, k;
    cout << "Введіть розмір одиничної матриці: ";
        cin >> n;
    mas = new int[n];
    //Вводимо елементи матриці
    for (i = 0; i < n; ++i)
        cin >> mas[i];

    // Мінімальний по модулю елемент
    for (i = 1; i < n; ++i)
        if (abs(mas[i]) < abs(mas[imin]))
            imin = i;
    cout << "Мінімальний по модулю елемент - " << mas[imin] << endl;


    return 0;
}
