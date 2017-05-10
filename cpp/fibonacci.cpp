/*
 * fibonacci.cpp
 *
 *
 */


#include <iostream>

using namespace std;

//fibrek(n) = 1 dla n {0, 1}
//fibrek(n) = fibrek(n-1) + fibrek(n-2) dla n > 1
//fibrek(n) = 1 dla n = 1


long int fibrek(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
        return fibrek(n - 1) + fibrek(n - 2);
}


long int fibonacci(int n){
    int wynik = 0;
    int a = 0;
    int b = 1;
    if (n == 1) wynik = 1;

    for(int i = 0; i < n-1; i++) {
        wynik = a + b;
        a = b;
        b = wynik;
    }
    return wynik;
}

int main(int argc, char **argv)
{

    int liczba = 0;
    cout << "Podaj liczbę: ";
    cin >> liczba;

    cout << "Fibonacci: " << fibonacci(liczba) << endl;
    cout << "Fibonacci rek.: " << fibrek(liczba) << endl;


	return 0;
}

