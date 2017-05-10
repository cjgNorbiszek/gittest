/*
 * Warunki zagnieżdżone
 *
 * Copyright 2016 Norbert Miry
 *
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int a, b, c = 0;

    cout << "Podaj trzy liczby całkowite" << endl;
    cin >> a >> b >> c;

    if (a == b)
        cout << "a jest równe b\t" << endl;
    if (a == c)
        cout << "a jest równe c\t" << endl;
    if (b == c)
        cout << "b jest równe c\t" << endl;

    if (a < b && a < c)
        cout << "Najmniejsze a:\t" << a << endl;
    else if (b < c)
        cout << "Najmniejsze b:\t" << b << endl;
    else
        cout << "Najmniejsze c:\t" << c << endl;






 /*   if (a < b)
        if (a < c)
            cout << "Liczba a najmniejsza:\t" << a << endl;

    if (b < a)
        if (b < c)
            cout << "Liczba b najmniejsza:\t" << b << endl;

    if (c < a)
        if (c < b)
            cout << "Liczba c najmniejsza:\t" << c << endl;
*/
	return 0;
}
