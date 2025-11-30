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

  f1.show();
  cout << "Result: "<< f1.getNum() << endl;
  f2.show();
  cout << "Result: " << f2.getNum() << endl;
  
  return 0;

}
