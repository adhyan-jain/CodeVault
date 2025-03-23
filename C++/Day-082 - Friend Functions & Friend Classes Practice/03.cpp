/*
Problem Statement

Arjun is creating a recipe management system that needs to handle fractional quantities of ingredients. 
To simplify the calculations, he decides to create a Fraction class with private attributes numerator, 
and denominator to represent fractions. Arjun also needs a friend function, addMixedFraction(const 
Fraction&, const Fraction&), to add two fractions, where one or both may be mixed fractions 
(numerator > denominator). The result should be returned as a reduced Fraction object.

Write a program to input the numerators and denominators of two fractions, create Fraction objects 
using these values, add them using addMixedFraction, and display the result.
*/

#include <iostream>

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int num = 0, int den = 1) : numerator(num), denominator(den) {}

    int getNumerator() const {
        return numerator;
    }

    int getDenominator() const {
        return denominator;
    }

    friend Fraction addMixedFraction(const Fraction& frac1, const Fraction& frac2);
};

Fraction addMixedFraction(const Fraction& frac1, const Fraction& frac2) {
    int num1 = frac1.numerator;
    int den1 = frac1.denominator;
    int num2 = frac2.numerator;
    int den2 = frac2.denominator;

    int resultNum, resultDen;

    if (den1 == den2) {
        resultNum = num1 + num2;
        resultDen = den1;
    } else {
        resultNum = (num1 * den2) + (num2 * den1);
        resultDen = den1 * den2;
    }

    return Fraction(resultNum, resultDen);
}

int main() {
    int num1, den1, num2, den2;

    std::cin >> num1 >> den1;
    std::cin >> num2 >> den2;

    Fraction frac1(num1, den1);
    Fraction frac2(num2, den2);

    Fraction result = addMixedFraction(frac1, frac2);
    std::cout << result.getNumerator() << "/"  << result.getDenominator();
    return 0;
}