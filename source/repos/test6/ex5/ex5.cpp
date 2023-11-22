#include <iostream>
#include <cmath>
#include <Windows.h>
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    // Задані значення змінних
    double alpha, beta;

    // Введення значень змінних
    std::cout << "Введіть значення alpha в радіанах: ";
    std::cin >> alpha;
    std::cout << "Введіть значення beta в радіанах: ";
    std::cin >> beta;

    // Обчислення чисельника та знаменника для z1
    double z1_numerator = sin(alpha) + cos(2 * beta - alpha);
    double z1_denominator = cos(alpha) - sin(2 * beta - alpha);

    // Перевірка на ділення на нуль для z1
    if (z1_denominator != 0) {
        // Обчислення результату для z1
        double z1_result = z1_numerator / z1_denominator;
        std::cout << "Результат для z1: " << z1_result << std::endl;
    }
    else {
        std::cout << "Помилка: Знаменник z1 дорівнює нулю. Ділення на нуль неможливе." << std::endl;
    }

    // Обчислення чисельника та знаменника для z2
    double z2_numerator = 1 + pow(sin(beta), 2);
    double z2_denominator = pow(cos(beta), 2);

    // Перевірка на ділення на нуль для z2
    if (z2_denominator != 0) {
        // Обчислення результату для z2
        double z2_result = z2_numerator / z2_denominator;
        std::cout << "Результат для z2: " << z2_result << std::endl;
    }
    else {
        std::cout << "Помилка: Знаменник z2 дорівнює нулю. Ділення на нуль неможливе." << std::endl;
    }

    return 0;
}