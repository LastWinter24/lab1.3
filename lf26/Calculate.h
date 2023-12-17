#pragma once
#include <iostream>
#include <cmath>  // Для использования функции pow()
#include <cassert> // Для модульного тестирования


// Функция вычисления значения функции f(x)
double calculateF(double x) {
    if (x <= 0) {
        return -x;
    }
    else if (x < 2) {
        return pow(x, 2);
    }
    else {
        return 4.0;
    }
}