#include "ComplexNumber.hpp"
#include <iostream>

using namespace std;


//Funzione per creare parte reale e parte immaginaria di un numero complesso
ComplexNumber complex_num(double real, double imaginary)
{
    return{real, imaginary};

}


// Operatore di output per stampare un numero complesso
ostream& operator<<(ostream& os, const ComplexNumber &number)
{
    if (number.real != 0){
       os << number.real;

        if (number.imaginary > 0)
            os << "+" << number.imaginary << "i";

        if (number.imaginary < 0)
            os << number.imaginary << "i";

    }
    if (number.real == 0)
        os << number.imaginary << "i";


    return os;
}


// Operatore di somma
ComplexNumber operator+(const ComplexNumber &n1, const ComplexNumber &n2)
{
    ComplexNumber result;

    result.real = n1.real + n2.real;
    result.imaginary = n1.imaginary + n2.imaginary;

    return result;
}


// Operatore di uguaglianza
bool operator==(const ComplexNumber &n1, const ComplexNumber &n2)
{
    return n1.real == n2.real && n1.imaginary == n2.imaginary;
}


// Funzione per calcolare il coniugato
ComplexNumber conjugate(const ComplexNumber& number)
{
    ComplexNumber result;

    result.real = number.real;
    result.imaginary = -number.imaginary;

    return result;
}

