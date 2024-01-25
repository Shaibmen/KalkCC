#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "RUS");
    
    
    float num1;    
    float num2;

    bool IsDone = false;
    while (IsDone != true)
    {
        cout << "Выберите какое действие надо сделать \n 1.Сложение\n 2.Вычитание \n 3.Умножение \n 4.Деление \n 5.Возведение в степень \n 6.Нахождение квадратного корня \n 7.нахождение 1% от числа. \n 8.Факториал. \n 9.Выход \n";

        int choose;
        cin >> choose;

        if (choose == 1)
        {
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            cout <<"Ответ: " << num1 + num2 << "\n\n\n";
        }
        if (choose == 2)
        {
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            cout << "Ответ: " << num1 - num2 << "\n\n\n";
        }
        if (choose == 3)
        {
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            cout << "Ответ: " << num1 * num2 << "\n\n\n";
        }
        if (choose == 4)
        {
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            cout << "Ответ: " << num1 / num2 << "\n\n\n";
        }
        if (choose == 5)
        {
            cout << "Введите число: ";
            cin >> num1;
            cout << "Введите степень: ";
            cin >> num2;
            cout << "Ответ: " << pow(num1, num2) << "\n\n\n";
        }
        if (choose == 6)
        {
            cout << "Введите число: ";
            cin >> num1;
            cout << "Ответ: " << sqrt(num1) << "\n\n\n";
        }
        if (choose == 7)
        {
            cout << "Введите число: ";
            cin >> num1;
            cout << "Ответ: " << num1 / 100 << "\n\n\n";
        }
        if (choose == 8)
        {
            num2 = 1;
            cout << "Введите число: ";
            cin >> num1;
            for (int i = 1; i <= num1; i++)
            {
                num2 *= i;
            }
            cout << "Ответ: " << num2 << "\n\n\n";
        }
        if (choose == 9)
        {
            IsDone = true;
            break;
        }

    }
}

