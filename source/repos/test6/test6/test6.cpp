#include <iostream>
#include <cmath> 
#include <Windows.h>
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    // Заданий діаметр кола
    double diameter;
    std::cout << "Введіть діаметр кола: ";
    std::cin >> diameter;

    // Обчислення довжини кола
    double perimeter = 3.14159265359 * diameter;

    // Обчислення площі круга
    double area = 3.14159265359 * pow(diameter / 2, 2);

    // Виведення результатів
    std::cout << "Довжина кола: " << perimeter << std::endl;
    std::cout << "Площа круга: " << area << std::endl;

    return 0;
}
