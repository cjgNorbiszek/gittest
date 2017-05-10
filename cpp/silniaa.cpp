/*
 * Obliczanie wartosci silni
 * liczby naturalnej.
 *
 *
 */


#include <iostream>

using namespace std;

//silnia(0) = 1 dla n = 0
// silnia(n) = silnia(n-1) * n dla n > 0


long int sil_rek(int n){
        if(n == 0) return 1;
        return sil_rek(n - 1) * n;
}

long int silnia(int liczba){
    long int wynik = 1;
    for(int i = 1; i <= liczba; i++){
        wynik = wynik * i;
    }

    return wynik;
}

int main()
{
    int liczba = 0;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    cout << "Silnia: " << silnia(liczba) << endl;
    cout << "Silnia rekuracyjna: " << sil_rek(liczba) << endl;

    return 0;
}
