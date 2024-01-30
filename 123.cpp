#include <iostream>
#include <cmath>

using namespace std;

// Функция сложения
double addition(double num1, double num2) {
    return num1 + num2;
}

// Функция вычитания
double subtraction(double num1, double num2) {
    return num1 - num2;
}

// Функция деления
double division(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        cout << "Ошибка: деление на ноль!" << endl;
        return 0;
    }
}

// Функция умножения
double multiplication(double num1, double num2) {
    return num1 * num2;
}

// Функция возведения в степень
double power(double base, double exponent) {
    return pow(base, exponent);
}

// Функция вычисления квадратного корня
double squareRoot(double num) {
    if (num >= 0) {
        return sqrt(num);
    } else {
        cout << "Ошибка: невозможно извлечь корень из отрицательного числа!" << endl;
        return 0;
    }
}

// Функция нахождения 1 процента от числа
double percent(double num) {
    return num / 100;
}

// Функция вычисления факториала числа
double factorial(double num) {
    if (num < 0) {
        cout << "Ошибка: невозможно вычислить факториал отрицательного числа!" << endl;
        return 0;
    } else if (num == 0) {
        return 1;
    } else {
        double result = 1;
        for (int i = 1; i <= num; i++) {
            result *= i;
        }
        return result;
    }
}

int main() {
    int choice;
    double num1, num2;
    
    do {
        // Выводим меню
        cout << "1. Сложение" << endl;
        cout << "2. Вычитание" << endl;
        cout << "3. Деление" << endl;
        cout << "4. Умножение" << endl;
        cout << "5. Возведение в степень" << endl;
        cout << "6. Квадратный корень" << endl;
        cout << "7. Нахождение 1 процента от числа" << endl;
        cout << "8. Вычисление факториала числа" << endl;
        cout << "9. Выйти из программы" << endl;
        cout << "Выберите операцию (1-9): ";
        cin >> choice;
        
        // Обработка выбора пользователя
        switch (choice) {
            case 1:
                cout << "Введите первое число: ";
                cin >> num1;
                cout << "Введите второе число: ";
                cin >> num2;
                cout << "Результат: " << addition(num1, num2) << endl;
                break;
                
            case 2:
                cout << "Введите первое число: ";
                cin >> num1;
                cout << "Введите второе число: ";
                cin >> num2;
                cout << "Результат: " << subtraction(num1, num2) << endl;
                break;
                
            case 3:
                cout << "Введите делимое: ";
                cin >> num1;
                cout << "Введите делитель (не ноль): ";
                cin >> num2;
                cout << "Результат: " << division(num1, num2) << endl;
                break;
                
            case 4:
                cout << "Введите первый множитель: ";
                cin >> num1;
                cout << "Введите второй множитель: ";
                cin >> num2;
                cout << "Результат: " << multiplication(num1, num2) << endl;
                break;
                
            case 5:
                cout << "Введите число: ";
                cin >> num1;
                cout << "Введите степень: ";
                cin >> num2;
                cout << "Результат: " << power(num1, num2) << endl;
                break;
                
            case 6:
                cout << "Введите число: ";
                cin >> num1;
                cout << "Результат: " << squareRoot(num1) << endl;
                break;
                
            case 7:
                cout << "Введите число: ";
                cin >> num1;
                cout << "Результат: " << percent(num1) << endl;
                break;
                
            case 8:
                cout << "Введите число: ";
                cin >> num1;
                cout << "Результат: " << factorial(num1) << endl;
                break;
                
            case 9:
                cout << "Программа завершена." << endl;
                break;
                
            default:
                cout << "Ошибка: неверный выбор операции! Попробуйте еще раз." << endl;
                break;
        }
        
        cout << endl;
    } while (choice != 9);
    
    return 0;
}
