#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    int num1, num2, num3;

    // Ввод трех чисел
    cout << "Введите три числа через пробел: ";
    cin >> num1 >> num2 >> num3;

    int sum;

    // Нахождение суммы двух наибольших чисел
    if (num1 >= num2 && num1 >= num3) {
        sum = num1 + (num2 > num3 ? num2 : num3);
    }
    else if (num2 >= num1 && num2 >= num3) {
        sum = num2 + (num1 > num3 ? num1 : num3);
    }
    else {
        sum = num3 + (num1 > num2 ? num1 : num2);
    }

    // Вывод суммы
    cout << "Сумма двух наибольших чисел: " << sum << endl;
	
	return 0;
}



