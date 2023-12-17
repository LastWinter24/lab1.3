#include <iostream>
#include <cmath> // Для использования функции sin()
#include <cassert> // Для модульного тестирования
#include "Calculate.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    // Модульный тест 1: x > 0
    double result1 = calculateF(2.0);
    assert(result1 == 2 * sin(2.0));

    // Модульный тест 2: x <= 0
    double result2 = calculateF(-1.0);
    assert(result2 == 6 - (-1.0));

    // Ввод вещественного числа x
    double x;
    cout << "Введите вещественное число x: ";
    cin >> x;

    // Вычисление значения функции f(x)
    double result = calculateF(x);

    // Вывод результата
    cout << "Значение функции f(" << x << ") = " << result << endl;


	
	return 0;
}



