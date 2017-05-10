/*
 * petle_cw6.cpp
 *
 * Norbert Miry
 *

 *
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{

    int a, ilosc = 0;

    a = ilosc = 0;

    do {
    cout << "podaj liczbę: " << endl;
    cin >>a;
    if( a % 2 > 0) ilość++;
    }while (a > 0);

    cout << "ilość liczb nieparzystych: " << ilosc << endl;
	return 0;
}
