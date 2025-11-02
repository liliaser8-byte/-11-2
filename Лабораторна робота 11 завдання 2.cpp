#include <iostream>
#include <cmath>     // для pow(), sin(), cos()
#include <windows.h>
using namespace std;

// Функція для обчислення трьох результатів
void calculate(double t, double b, double& a, double& x, double& y) {
    a = pow(t, 2) * b;            // a = t² * b
    x = cbrt(a - b);              // x = кубічний корінь (a - b)
    y = a * cos(x) - b * sin(x);  // y = a*cos(x) - b*sin(x)
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double t, b, a, x, y;

    // Ввід початкових даних
    cout << "Введіть t: ";
    cin >> t;
    cout << "Введіть b: ";
    cin >> b;

    // Виклик функції обчислення
    calculate(t, b, a, x, y);

    // Виведення результатів
    cout << "\nРезультати обчислень:" << endl;
    cout << "a = " << a << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}