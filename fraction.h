#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;
public:
    Fraction();

    Fraction(int, int);

    int getNumerator();

    void setNumerator(int);

    int getDenominator();

    void setDenominator(int);

    bool operator<(Fraction);

    bool operator>(Fraction);

    bool operator==(Fraction);

    bool operator!=(Fraction);

    bool operator<=(Fraction);

    bool operator>=(Fraction);

    Fraction operator*(Fraction);

    Fraction operator+(Fraction);

    Fraction operator-(Fraction);

    Fraction operator/(Fraction);

    void print();

};

#include "fraction.tpp"

#endif // FRACTION_H

