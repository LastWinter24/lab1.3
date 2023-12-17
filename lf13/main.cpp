#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    int num1, num2, num3;

    // Ввод трех чисел
    cout << "Введите три числа через пробел: ";
    cin >> num1 >> num2 >> num3;

    int smallest, largest, middle;

    // Определение наименьшего числа
    smallest = (num1 < num2) ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3);

    // Определение наибольшего числа
    largest = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

    // Нахождение среднего числа
    if (num1 != smallest && num1 != largest) {
        middle = num1;
    }
    else if (num2 != smallest && num2 != largest) {
        middle = num2;
    }
    else {
        middle = num3;
    }

    // Вывод среднего числа
    cout << "Среднее из чисел: " << middle << endl;
	
	return 0;
}



