#include <stdio.h>
#include <iostream>
#include <cstdlib>

#define N 9 //Матриця 9*9 бо тільки туди влізуть числа 1-32
#define M (N * N + 1)/ 2 - N

using namespace std;

int main() {
    setlocale(0, ".1251");

    int matrix[N][N];
    int b[M];
    int i, j;
    int counter = 0;

    for (i = 0; i < M; i++) {
        b[i] = i + 1;
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            matrix[i][j] = 0;
        }
    }

    for (i = 0; i < N; i++) {

        for (j = i + 1; j < N - i - 1; j++) {
            matrix[i][j] = b[counter++];
        }

        for (j = N - i; j < i; j++) {
            matrix[i][j] = b[counter++];
        }
    }

    cout << "Матриця виглядатиме ось так:" << endl;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cout << "\t" << matrix[i][j]; //Вирівнює матрицю
        }
        cout << endl;
        
    }

    return 0;
}
