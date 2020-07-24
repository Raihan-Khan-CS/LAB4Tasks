#include "fraction.h"

Fraction::Fraction() {
    numerator = 0;
    denominator = 1;
}

Fraction::Fraction(int numerator, int denominator) {
    this->numerator = numerator;
    this->denominator = denominator;
}

void Fraction::print() {

    cout << numerator << "/" << denominator << endl;

}

int Fraction::getNumerator() {

    return numerator;
}

void Fraction::setNumerator(int numerator) {

    this->numerator = numerator;

}

int Fraction::getDenominator() {

    return denominator;
}

void Fraction::setDenominator(int denominator) {

    this->denominator = denominator;

}

Fraction Fraction::operator*(Fraction f) {
    Fraction result;
    result.numerator = numerator * f.numerator;
    result.denominator = denominator * f.denominator;
    return result;
}

Fraction Fraction::operator+(Fraction f) {
    Fraction result;
    result.numerator = numerator * f.denominator + f.numerator * denominator;
    result.denominator = denominator * f.denominator;
    return result;
}

Fraction Fraction::operator-(Fraction f) {
    Fraction result;
    result.numerator = numerator * f.denominator - f.numerator * denominator;
    result.denominator = denominator * f.denominator;
    return result;
}

Fraction Fraction::operator/(Fraction f) {
    Fraction result;
    result.numerator = numerator * f.denominator;
    result.denominator = denominator * f.numerator;
    return result;
}

bool Fraction::operator<(Fraction f) {
    int numerator, Cnumerator, Cdenominator;
    numerator = numerator * f.denominator;
    Cnumerator = f.numerator * denominator;
    Cdenominator = denominator * f.denominator;
    if ((numerator - Cnumerator) * Cdenominator < 0)

        return true;

    else

        return false;
}

bool Fraction::operator>(Fraction f) {
    int numerator, Cnumerator, Cdenominator;
    numerator = numerator * f.denominator;
    Cnumerator = f.numerator * denominator;
    Cdenominator = denominator * f.denominator;
    if ((numerator - Cnumerator) * Cdenominator > 0)
        return true;

    else

        return false;
}

bool Fraction::operator==(Fraction f) {

    if (numerator == f.numerator && denominator == f.denominator)
        return true;
    else
        return false;
}

bool Fraction::operator!=(Fraction f) {

    if (numerator == f.numerator && denominator == f.denominator)
        return false;

    else
        return true;

}

bool Fraction::operator<=(Fraction f) {
    int numerator, Cnumerator, Cdenominator;
    numerator = numerator * f.denominator;
    Cnumerator = f.numerator * denominator;
    Cdenominator = denominator * f.denominator;
    if ((numerator - Cnumerator) * Cdenominator < 0 || (numerator == f.numerator && denominator == f.denominator))

        return true;

    else

        return false;
}

bool Fraction::operator>=(Fraction f) {
    int numerator, Cnumerator, Cdenominator;
    numerator = numerator * f.denominator;
    Cnumerator = f.numerator * denominator;
    Cdenominator = denominator * f.denominator;
    if ((numerator - Cnumerator) * Cdenominator > 0 || (numerator == f.numerator && denominator == f.denominator))

        return true;

    else

        return false;
}


