//	    В одномірному масиві, що складається з дійсних елементів,
//	обчислити номер максимального за модулем елемента масиву;
//	суму елементів масиву, розташованих після першого додатного
//	елемента. Перетворити масив таким чином, щоб спочатку
//	розташовувалися всі елементи, ціла частина яких лежить
//	в інтервалі [a,b], а потім-всі інші.
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
    cout << "Введіть значення а ";
    cin >> a;
    cout << "Введіть значення b ";
    cin >> b;
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
    cout << "Номер найбільшого за модулем числа: " << max1 << endl;
    int v = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > 0)
        {
            v = i;
            break;
        }
    }
    ///////
    int sum = 0;

    for (int i = v + 1; i < n; i++)
    {
        sum = sum + A[i];
    }
    cout << "Сума чисел після першого додатного числа: " << sum << endl;

    if (a < b)
    {
        for (int i = 0; i < n - 1; ++i)
        {
            if (A[i] <= a || A[i] >= b)
            {
                for (int Ci = i + 1; Ci < n; ++Ci)
                {
                    if (A[Ci] >= a && A[Ci] <= b)
                    {
                        swap(A[i], A[Ci]);
                    }
                }

            }

        }
    }
    else
    {
        for (int i = 0; i < n - 1; ++i)
        {
            if (A[i] <= b || A[i] >= a)
            {
                for (int Ci = i + 1; Ci < n; ++Ci)
                {
                    if (A[Ci] >= b && A[Ci] <= a)
                    {
                        swap(A[i], A[Ci]);
                    }
                }

            }

        }
    }
    cout << "масив спочатку з величинами в інтервалі [" << a << "," << b << "]:  ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
