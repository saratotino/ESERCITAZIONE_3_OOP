#include "src/ComplexNumber.hpp"
#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    ComplexNumber a = {4, 3};
    ComplexNumber b = {0, -5};

        // Stampa i numeri complessi
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;

        // Somma dei numeri complessi
        ComplexNumber sum = a + b;
        cout << "Somma = " << sum << endl;

        // Verifica l'uguaglianza
        cout << (a == b ? "a e b sono uguali" : "a e b non sono uguali") << endl;

        // Calcola il coniugato di a
        ComplexNumber conjugate_a = conjugate(a);
        cout << "Il coniugato di a: " << conjugate_a << endl;

        //Calcola il coniugato di b
        ComplexNumber conjugate_b = conjugate(b);
        cout << "Il coniugato di b: " << conjugate_b << endl;

        return 0;
    }


