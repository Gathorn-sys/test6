#include <iostream>
#include <Windows.h>
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    // Задані параметри тіла
    double m, v, h, g;

    // Введення маси тіла, швидкості та висоти
    std::cout << "Введіть масу тіла (кг): ";
    std::cin >> m;
    std::cout << "Введіть швидкість тіла (м/с): ";
    std::cin >> v;
    std::cout << "Введіть висоту (м): ";
    std::cin >> h;

    // Значення прискорення вільного падіння на Землі (9.8 м/с^2)
    g = 9.8;

    // Обчислення кінетичної енергії
    double kinetic_energy = 0.5 * m * v * v;

    // Обчислення потенціальної енергії
    double  potential_energy = m * g * h;

    // Виведення результатів
    std::cout << "Кінетична енергія тіла: " << kinetic_energy << " джоулів" << std::endl;
    std::cout << "Потенціальна енергія тіла: " << potential_energy << " джоулів" << std::endl;

    return 0;
}