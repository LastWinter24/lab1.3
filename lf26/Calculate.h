#pragma once
#include <iostream>
#include <cmath>  // ��� ������������� ������� pow()
#include <cassert> // ��� ���������� ������������


// ������� ���������� �������� ������� f(x)
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