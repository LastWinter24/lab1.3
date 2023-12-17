#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    int num;

    cout << "Введите целое число (от 1 до 999): ";
    cin >> num;

    // Проверяем четность числа
    bool isEven = num % 2 == 0;

    // Получаем количество цифр в числе
    int numOfDigits = 0;
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        numOfDigits++;
    }

    // Выводим строку-описание в зависимости от четности и количества цифр
    switch (numOfDigits) {
    case 1:
        if (isEven)
            cout << "Однозначное четное число" << endl;
        else
            cout << "Однозначное нечетное число" << endl;
        break;
    case 2:
        if (isEven)
            cout << "Двузначное четное число" << endl;
        else
            cout << "Двузначное нечетное число" << endl;
        break;
    case 3:
        if (isEven)
            cout << "Трехзначное четное число" << endl;
        else
            cout << "Трехзначное нечетное число" << endl;
        break;
    default:
        cout << "Число не попадает в указанный диапазон." << endl;
    }
	
	return 0;
}



