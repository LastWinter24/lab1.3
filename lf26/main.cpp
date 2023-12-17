#include <iostream>
#include <cmath>  // Для использования функции pow()
#include <cassert> // Для модульного тестирования
#include "Calculate.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    // Модульный тест 1: x <= 0
    double result1 = calculateF(-3.0);
    assert(result1 == -(-3.0));

    // Модульный тест 2: 0 < x < 2
    double result2 = calculateF(1.5);
    assert(result2 == pow(1.5, 2));

    // Модульный тест 3: x >= 2
    double result3 = calculateF(3.0);
    assert(result3 == 4.0);

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



