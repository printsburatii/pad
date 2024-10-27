#include <iostream>

using namespace std;

bool proverka(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] <= 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n1, n2, m1, m2;
    cout << "Введите размерность первого массива" << endl;
    cout << "Кол-во строк: ";
    cin >> n1;
    cout << endl << "Кол-во столбцов: ";
    cin >> n2;

    int ar1[n1][n2];
    cout << endl << "Введите массив: ";
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            cin >> ar1[i][j];
        }
    }

    cout << "Введите размерность второго массива" << endl;
    cout << "Кол-во строк: ";
    cin >> m1;
    cout << endl << "Кол-во столбцов: ";
    cin >> m2;

    int ar2[m1][m2];
    cout << endl << "Введите массив: ";
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < m2; j++) {
            cin >> ar2[i][j];
        }
    }

    cout << endl << "Проверка столбцов первого массива:" << endl;
    bool hasPositiveColumn1 = false;
    cout << "Положительные столбцы в первом массиве: ";
    for (int j = 0; j < n2; j++) {
        int arr[n1];
        for (int i = 0; i < n1; i++) {
            arr[i] = ar1[i][j];
        }

        if (proverka(arr, n1)) {
            cout << j + 1 << " ";
            hasPositiveColumn1 = true;
        }
    }
    if (!hasPositiveColumn1) {
        cout << "Нет положительных столбцов";
    }
    cout << endl;

    cout << endl << "Проверка столбцов второго массива:" << endl;
    bool hasPositiveColumn2 = false;
    cout << "Положительные столбцы во втором массиве: ";
    for (int j = 0; j < m2; j++) {
        int arr[m1];
        for (int i = 0; i < m1; i++) {
            arr[i] = ar2[i][j];
        }

        if (proverka(arr, m1)) {
            cout << j + 1 << " ";
            hasPositiveColumn2 = true;
        }
    }
    if (!hasPositiveColumn2) {
        cout << "Нет положительных столбцов";
    }
    cout << endl;

    return 0;
}