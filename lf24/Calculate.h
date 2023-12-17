#pragma once
#include <iostream>
#include <cmath> // Для использования функции sin()
#include <cassert> // Для модульного тестирования

// Функция вычисления значения функции f(x)
double calculateF(double x) {
    if (x > 0) {
        return 2 * sin(x);
    }
    else {
        return 6 - x;
    }
}