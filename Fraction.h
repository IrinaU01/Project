#pragma once
class Fraction
{
private:
    int num;
    int denom;
    int gcd(int a, int b);
    void simplify();

public:
    Fraction();
    Fraction(int num1, int denom1);
    int getNum() const;
    int getDenom() const;
    void setNum(int num1);
    void setDenom(int denom1);
    void setFraction(int num1, int denom1);
    Fraction add(const Fraction& other) const;
    Fraction subtract(const Fraction& other) const;
    Fraction multiply(const Fraction& other) const;
    Fraction divide(const Fraction& other) const;
    void show() const;
    void showSum(const Fraction& other) const;
};
