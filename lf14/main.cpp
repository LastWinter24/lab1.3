#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    int num1, num2, num3;

    // Ввод трех чисел
    cout << "Введите три числа через пробел: ";
    cin >> num1 >> num2 >> num3;

    int smallest, largest;

    // Определение наименьшего числа
    smallest = (num1 < num2) ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3);

    // Определение наибольшего числа
    largest = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

    // Вывод наименьшего и наибольшего чисел
    cout << "Наименьшее число: " << smallest << endl;
    cout << "Наибольшее число: " << largest << endl;
	
	return 0;
}



