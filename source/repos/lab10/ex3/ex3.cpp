#include <iostream>
#include <cmath>
#include <Windows.h>
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    // Номер варіанту
    int i;
    std::cout << "Введіть номер варіанту (ціле число): ";
    std::cin >> i;

    // Координати вершин трикутника
    double x_A = 0, y_A = 0;
    double x_B = i, y_B = i - 1;
    double x_C = -i, y_C = i + 1;

    // Обчислення довжин сторін трикутника
    double a = sqrt(pow(x_B - x_C, 2) + pow(y_B - y_C, 2));
    double b = sqrt(pow(x_A - x_C, 2) + pow(y_A - y_C, 2));
    double c = sqrt(pow(x_A - x_B, 2) + pow(y_A - y_B, 2));

    // Обчислення висоти трикутника
    double h = fabs(y_B - y_A);

    // Обчислення медіани трикутника
    double m_a = sqrt((2 * pow(b, 2) + 2 * pow(c, 2) - pow(a, 2)) / 4);

    // Виведення результатів
    std::cout << "Висота трикутника (h): " << h << std::endl;
    std::cout << "Медіана трикутника (ma): " << m_a << std::endl;

    return 0;
}