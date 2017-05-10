/*
 * Obliczanie wartosci silni
 * liczby naturalnej.
 *
 *
 */


#include <iostream>

using namespace std;



float potrek(float n, float x){
        if(n == 0) return 1;
        return potrek(n, x-1)*n;
}


int main()
{
    int liczba = 0;
    int potega = 0;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    cout << "Podaj potege: ";
    cin >> potega;

    cout << "Wynik potegowania: " << potrek(liczba, potega);

    return 0;
}
