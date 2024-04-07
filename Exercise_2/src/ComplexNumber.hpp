#ifndef __COMPLEX_NUMBER_H
#define __COMPLEX_NUMBER_H

#include <iostream>
#include <cmath>

using namespace std;


struct ComplexNumber
{
    double real;

    double imaginary;

};


// Dichiarazione della funzione di output
ostream& operator<<(ostream& os, const ComplexNumber &number);


// Dichiarazione dell'operatore di somma
ComplexNumber operator+(const ComplexNumber &n1, const ComplexNumber &n2);


// Dichiarazione dell'operatore di uguaglianza
bool operator==(const ComplexNumber &n1, const ComplexNumber &n2);


// Dichiarazione della funzione per calcolare il coniugato
ComplexNumber conjugate(const ComplexNumber& number);

#endif




