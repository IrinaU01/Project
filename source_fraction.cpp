/*Завдання
Реалізуйте клас Дріб. Необхідно зберігати чисельник і знаменник як змінні-члени. 
Реалізуйте функції-члени для введення даних у змінні-члени,
для виконання арифметичних операцій (додавання, віднімання, множення, ділення тощо)
*/

#include <iostream>
using namespace std;
#include "Fraction.h"
int main()
{
	int num1;
	int denom1;
    int num2;
    int denom2;

    cout << "Enter a numerator 1" << endl;
    cin >> num1;
    cout << "Enter a denominator 1" << endl;
    cin >> denom1;
    Fraction f1(num1, denom1);

    cout << "Enter a numerator 2" << endl;
    cin >> num2;
    cout << "Enter a denominator 2" << endl;
    cin >> denom2;
    Fraction f2(num2, denom2);
   
    cout << "Result: "<< f1.getNum() << endl;

    cout << "Result: " << f2.getNum() << endl;

    Fraction sum = f1.add(f2);
    cout << " (F1 + F2) = ";
    sum.show();
    cout << endl;

    Fraction diff = f1.subtract(f2);
    cout << " (F1 - F2) = ";
    diff.show();
    cout << endl;

    Fraction product = f1.multiply(f2);
    cout << " (F1 * F2) = ";
    product.show();
    cout << endl;

    Fraction quotient = f1.divide(f2);
    cout << " (F1 / F2) = ";
    quotient.show();
    cout << endl;

    cout << " (F1 + F2) = ";
    f1.showSum(f2);
    cout << endl;


    return 0;


}
