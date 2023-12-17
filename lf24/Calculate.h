#pragma once
#include <iostream>
#include <cmath> // ��� ������������� ������� sin()
#include <cassert> // ��� ���������� ������������

// ������� ���������� �������� ������� f(x)
double calculateF(double x) {
    if (x > 0) {
        return 2 * sin(x);
    }
    else {
        return 6 - x;
    }
}