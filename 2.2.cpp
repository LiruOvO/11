//          Визначити середню довжину неперервних
//        додатних послідовностей масиву (проміжні 
//        значення теж виводити).
#include <iostream>
#include <cstdlib>
#include <cmath>
//Руда Єлизавета ФІТ 1-4 В12

using namespace std;

int main()
{
    setlocale(0, ".1251");

    int n = 120;
    int A[n];

    for (int i = 0; i < n; i++)
    {
        A[i] = rand() % 141 - 70;
    }

    cout << "\nмасив: ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    double cA = 0, cB = 0, sum = 0, x;

    for (int i = 0; i < n; i++)
    {
        if (A[i] >= 0)
        {
            x = 1;
            cA++;
        }
        if (A[i] < 0 && x == 1)
        {
            sum = sum + cA;
            cA = 0;
            cB++;
            x = 0;
        }
    }
    cout << "\nСередня довжина: " << sum / cB << endl;
}
