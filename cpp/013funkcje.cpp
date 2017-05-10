/*
 * Funkcje w C++
 *
 * Copyright 2016 lo1sand <lo1sand@lap79>
 *
 */

#include <iostream>

using namespace std;

int licznik = 0; // ZMIENNA GLOBALNA


void sumuj(float a, float b) { // przekazywanie argumentów przez wartość!
    float suma = a + b; // ZMIENNE LOKALNE
    cout << "Suma: " << suma << endl;
    a = a + 100;
    b = 0;
    cout << "Licznik(sumuj): " << licznik++ << endl;
}

float suma(float a, float b) {
    float suma = a + b; // ZMIENNE LOKALNE
    return suma;
}

void sumujR(float &a, float &b) { // przekazywanie argumentów przez referencję
    float suma = a + b; // ZMIENNE LOKALNE
    cout << "Suma: " << suma << endl;
    a = a + 100;
    b = 0;
    cout << "Licznik(sumuj): " << licznik++ << endl;
}

int main(int argc, char **argv)
{

    float a, b = 0; // ZMIENNE LOKALNE

    cout << "Podaj dwie liczby:" << endl;
    cin >> a >> b;

    cout << "Suma: " << suma(a, b) << endl;


    //sumujR(a, b); // wywołanie funkcji sumuj
    //cout << "a = " << a << " b = " << b << endl;
    //cout << "Licznik(main): " << licznik++ << endl;

	return 0;
}
