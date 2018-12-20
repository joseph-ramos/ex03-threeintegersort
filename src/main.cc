/**
 * CS V13 Object-Oriented Programming
 * CRN: [CHANGE THIS INFORMATION]
 * Assignment: [EX03-THREEINTEGERSORT]
 *
 * Statement of code ownership: I hereby state that I have written all of this
 * code and I have not copied this code from any other person or source.
 *
 * @author [Joseph Ramos]
 */

#include "threeintegersort.h"
#include <iostream>

using edu::vcccd::vc::csv13::sort;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
    cout << "Enter three numbers: " << endl;
    int num1;
    int num2;
    int num3;
    cin >> num1 >> num2 >> num3;

    int i1 = num1;
    int i2 = num2;
    int i3 = num3;
    sort(i1, i2, i3);

    cout << "Your numbers in ascending order: ";
    cout << i1 << " " << i2 << " " << i3 << endl;

    return 0;
}