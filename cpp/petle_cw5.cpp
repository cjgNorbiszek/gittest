/*
 * petle_cw5.cpp
 *
 *Norbert Miry
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    float a, b, c, d = 0;

    cout << "Podaj liczbę ocen" << endl;
    cin >> a;
    do {
    cout << "Podaj ocenę" << endl;
    cin >> b;
    c = c + b;
    d = d + 1;
    }while (d < a);

    cout << "średnia" << c/a << endl;








	return 0;
}
