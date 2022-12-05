//	    В одновимірному масиві, що складається з дійсних елементів,
//	обчислити номер мінімального за модулем елемента масиву;
//	суму модулів елементів масиву, розташованих після першого
//	від’ємного елемента. Стиснути масив, видаливши з нього всі
//	елементи, величина яких знаходиться в інтервалі [a,b].
//	Елементи, що звільнилися в кінці масиву, заповнити нулями.
#include <iostream>
#include <cstdlib>
#include <cmath>
//Руда Єлизавета ФІТ 1-4 В12

using namespace std;

int main()
{
    setlocale(0, ".1251"); 

    int min, n, a, b;
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

    cout << "масив: ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    ////////////
    min = A[0];
    int min1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (abs(A[i]) < abs(min))
        {
            min = A[i];
            min1 = i;
        }
    }
    cout << "" << endl;
    cout << "Номер найменшого за модулем числа " << min1 << endl;
    int v = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] < 0)
        {
            v = i;
            break;
        }
    }
    ///////
    int sum = 0;

    for (int i = v + 1; i < n; i++)
    {
        sum = sum + abs(A[i]);
    }
    cout << "Сума модулів після першого від'ємного числа " << sum << endl;

    if (a > b)
    {
        for (int i = 0; i < n; i++)
        {
            if (A[i] <= a && A[i] >= b)
            {
                A[i] = 0;
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (A[i] >= a && A[i] <= b)
            {
                A[i] = 0;
            }
        }
    }
    cout << "масив без величин в інтервалі [" << a << "," << b << "]:  ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
