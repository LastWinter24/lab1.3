#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    // Объявление переменных для хранения трех целых чисел
    int num1, num2, num3;
    int countPositive = 0; // Переменная для подсчета количества положительных чисел

    // Ввод трех целых чисел
    cout << "Введите три целых числа через пробел: ";
    cin >> num1 >> num2 >> num3;

    // Проверка каждого числа на положительность и увеличение счетчика
    if (num1 > 0) {
        countPositive++;
    }
    if (num2 > 0) {
        countPositive++;
    }
    if (num3 > 0) {
        countPositive++;
    }

    // Вывод количества положительных чисел
    cout << "Количество положительных чисел: " << countPositive << endl;

    return 0;
	
	return 0;
}



