#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    // Объявление переменной для хранения введенного числа
    int number;

    // Ввод целого числа
    cout << "Введите целое число: ";
    cin >> number;

    // Проверка условий и применение соответствующих операций
    if (number > 0) {
        number -= 8;
    }
    else if (number < 0) {
        number += 6;
    }
    else {
        number = 10;
    }

    // Вывод результата
    cout << "Полученное число: " << number << endl;
	
	return 0;
}



