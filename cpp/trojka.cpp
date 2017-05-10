/*
 * trojka
 *
 *
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{

    int a, b, c = 0;

    cout << "podaj trzy liczby" << endl;
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a)
        cout << "Można zbudować trójkąt" << endl;
        else
            cout << "Nie można zbudować trójkąta" << endl;

    if ((a * a) + (b * b) == (c * c))
        cout << "Trójkąt jest prostokątny" << endl;

    if ( a == b && a == c && b == c)
        cout << "Trójkąt jest równoboczny" << endl;

    if ( a == b)
        cout << "Trójkąt równo ramienny" << endl;

	return 0;
}
