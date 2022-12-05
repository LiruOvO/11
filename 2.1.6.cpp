//      В одновимірному масиві, що складається з дійсних
//  елементів, обчислити кількість елементів масиву, які
//  більші за 3; добуток елементів масиву, розташованих
//  після максимального за модулем елемента.

#include <iostream>
#include <cstdlib>
#include <cmath>
//Руда Єлизавета ФІТ 1-4 В12

using namespace std;

int main()
{
    setlocale(0, ".1251");

    int max, n, a, b;
    cout << "Введіть величину масиву n ";
    cin >> n;
    int A[n];

    for (int i = 0; i < n; i++)
    {
        A[i] = rand() % 50 - 25;
    }

    cout << "\nмасив: ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    ////////////
    max = A[0];
    int max1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (abs(A[i]) > abs(max))
        {
            max = A[i];
            max1 = i;
        }
    }

    cout << "" << endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > 3)
        {
            sum = sum + A[i];
        }
    }
    cout << "Сума елементів масиву більших за 3: " << sum << endl;
    int dob = 1;
    max1 = max1 + 1;
    for (max1; max1 < n; max1++)
    {
        dob = dob * A[max1];
    }
    cout << "Добуток елементів масива: " << dob << endl;

}
