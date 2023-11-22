#include <iostream>
#include <cmath>
#include <Windows.h>
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    // Задані значення змінних
    double y, d, e;

    // Введення значень змінних
    std::cout << "Введіть значення y: ";
    std::cin >> y;
    std::cout << "Введіть значення d: ";
    std::cin >> d;
    std::cout << "Введіть значення e: ";
    std::cin >> e;

    // Обчислення виразу
    double numerator = pow(sin(y), 2) + 0.3 * d;
    double denominator = pow(e, y) + log(d);

    // Перевірка на ділення на нуль
    if (denominator != 0) {
        double result = numerator / denominator;
        std::cout << "Результат виразу: " << result << std::endl;
    }
    else {
        std::cout << "Помилка: знаменник дорівнює нулю. Ділення на нуль неможливе." << std::endl;
    }

    return 0;
}