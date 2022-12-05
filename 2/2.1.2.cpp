//      В одномірному масиві, що складається з дійсних елементів,
//  обчислити суму додатних елементів масиву; добуток елементів 
//  масиву, розташованих між максимальним за модулем і мінімальним
//  за модулем елементами. Упорядкувати елементи масиву за спаданням.
#include <iostream>
#include <cstdlib>
#include <cmath>
//Руда Єлизавета ФІТ 1-4 В12

using namespace std;

int main()
{
    setlocale(0, ".1251");

    int max, min, n, max1 = 0, min1 = 0;
    cout << "Введіть величину масиву n ";
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        A[i] = rand() % 40 - 20;
    }

    cout << "масив: ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    ////////////
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > 0)
        {
            sum = sum + A[i];
        }
    }
    cout << "" << endl;
    cout << "Сумма додатний елементів: " << sum << endl;
    ////////////
    max = A[0];
    for (int i = 1; i < n; i++)
    {
        if (abs(A[i]) > abs(max))
        {
            max = A[i];
            max1 = i;
        }
    }
    min = A[0];
    for (int i = 1; i < n; i++)
    {
        if (abs(A[i]) < abs(min))
        {
            min = A[i];
            min1 = i;
        }
    }

    int dob = 1;
    if (max1 < min1)
    {
        max1++;
        for (max1; max1 < min1; max1++)
        {

            dob = dob * A[max1];

        }
    }
    else
    {
        min1++;
        for (min1; min1 < max1; min1++)
        {
            dob = dob * A[min1];
        }
    }

    cout << "Добуток елементів масиву: " << dob << endl;
    ///////////////////////////
    for (int i = 0; i < n - 1; ++i)
    {
        int Li = i;
        for (int Ci = i + 1; Ci < n; ++Ci)
        {
            if (A[Ci] > A[Li])
                Li = Ci;
        }
        swap(A[i], A[Li]);
    }

    cout << "Упорядкований масив: ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
