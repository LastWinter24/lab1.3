#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    int num1, num2, num3;

    // Ввод трех чисел
    cout << "Введите три числа через пробел: ";
    cin >> num1 >> num2 >> num3;

    int smallest;

    // Определение наименьшего числа
    smallest = (num1 < num2) ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3);

    // Вывод наименьшего числа
    cout << "Наименьшее число: " << smallest << endl;
	
	return 0;
}



