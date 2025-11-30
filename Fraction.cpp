#include <iostream>
using namespace std;
#include "Fraction.h"
#include <cstdlib>


int Fraction::gcd(int a, int b) {
    a = abs(a); 
    b = abs(b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void Fraction::simplify() {
    if (denom == 0) {
        denom = 1;
    }

    if (denom < 0) {
        num = -num;
        denom = -denom;
    }

    if (num == 0) {
        denom = 1;
        return;
    }

    int common_divisor = gcd(num, denom);
    num /= common_divisor;
    denom /= common_divisor;
}

Fraction::Fraction() : num(0), denom(1) {}

Fraction::Fraction(int num1, int denom1) : num(num1), denom(denom1) {
    if (denom == 0) {
        denom = 1;
    }
    simplify();
}

int Fraction::getNum() const {
    return num;
}

int Fraction::getDenom() const {
    return denom;
}

void Fraction::setNum(int num1) {
    num = num1;
    simplify();
}

void Fraction::setDenom(int denom1) {
    if (denom1 == 0) {
        denom = 1;
    }
    else {
        denom = denom1;
    }
    simplify();
}
void Fraction::setFraction(int num1, int denom1) {
    num = num1;
    if (denom1 == 0) {
        denom = 1;
    }
    else {
        denom = denom1;
    }
    simplify();
}

Fraction Fraction::divide(const Fraction& other) const {
    if (other.num == 0) {
        return Fraction(0, 1);
    }
    int new_num = this->num * other.denom;
    int new_den = this->denom * other.num;
    return Fraction(new_num, new_den);
}

Fraction Fraction::add(const Fraction& other) const {
    int new_num = (this->num * other.denom) + (other.num * this->denom);
    int new_den = this->denom * other.denom;
    return Fraction(new_num, new_den);
}

Fraction Fraction::subtract(const Fraction& other) const {
    int new_num = (this->num * other.denom) - (other.num * this->denom);
    int new_den = this->denom * other.denom;
    return Fraction(new_num, new_den);
}

Fraction Fraction::multiply(const Fraction& other) const 
{
    int new_num = this->num * other.num;
    int new_den = this->denom * other.denom;
    return Fraction(new_num, new_den);
}

void Fraction::show() const {
    cout << num;
}

void Fraction::showSum(const Fraction& other) const 
{
    this->add(other).show();
}

;


