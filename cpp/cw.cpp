/*
 * cw1.cpp
 *
 * Copyright 2016 smaster <smaster@atsbox>
 *
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{

    int a, b = 0;


    do{
        cout << "Podaj liczbe" << endl;
        cin >> a;
        b += a;
        cout << "Suma:  " << b << endl;
    }   while (b <= 75);














/*    cout << "Podaj dzielną:" << endl;
    cin >> a;

    do {
        cout << "Podaj dzielnik:" << endl;
        cin >> b;
        if (b == 0)
            cout << "Nie dziel przez zero!" << endl;
    }   while (b == 0);
*/






 /*   while (b == 0) {
        cout << "Nie dziel przez zero!" << endl;
        cout << "Podaj dzielnik" << endl;
        cin >> b;
    }
*/

	return 0;
}
