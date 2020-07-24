#include <iostream>
#include "fraction.h"

using namespace std;

int main() {
    Fraction f1(1, 2);
    Fraction f2(3, 4);

    Fraction f3; //f3=result
    cout << "The results are: " << endl;

    f3 = f1 * f2;
    f3.print();

    f3 = f1 + f2;
    f3.print();

    f3 = f1 - f2;
    f3.print();

    f3 = f1 / f2;
    f3.print();

    cout << endl << "Logically it's: " << endl;

    if (f1 < f2)
        cout << "Less than" << endl;
    if (f1 > f2)
        cout << "Greater than" << endl;

    if (f1 == f2)
        cout << "Logical equal" << endl;
    if (f1 != f2)
        cout << "Not equal" << endl;
    if (f1 <= f2)
        cout << "Less than or equal" << endl;
    if (f1 >= f2)
        cout << "Greater than or equal" << endl;


    return 0;
}
