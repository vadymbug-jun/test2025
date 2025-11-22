#include <iostream>
#include <cmath>
#include <iomanip>
#include "windows.h"

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x;
    cout << "Введіть значення x: ";
    cin >> x;

    double product = 1.0;
    for (int k = 1; k <= 5; k++) {
        product *= sin(k * x);
    }
    double Z = product + 2;
    cout << fixed << setprecision(4);
    cout << "Z = " << Z << endl;
    system("pause");
    return 0;
}