#include <iostream>
#include <iomanip>
#include <ctime>
//Руда Єлизавета ФІТ 1-4 В12

using namespace std;

int randInt(int min, int max) {

    return min + (rand() % (max - min + 1));

}

int main(int argc, char* argv[]) {

    const int DIM = 5;
    int matrix[DIM][DIM];
    const int Z = 0;
    srand(time(0));

    for (int i = 0; i < DIM; i++) {
        for (int j = 0; j < DIM; j++) {

            matrix[i][j] = randInt(-5, 5);
            cout << setw(4) << matrix[i][j] << ' ';

        }
        cout << endl;
    }
    cout << endl;

    int sum = 0;

    for (int i = 0; i < DIM; i++) {

        for (int j = 0; j < DIM; j++) {

            if (matrix[i][j] < 0)

                sum += matrix[i][j];

        }
    }

    cout << "Sum: " << sum << endl;
    cout << endl;

    return 0;
}
