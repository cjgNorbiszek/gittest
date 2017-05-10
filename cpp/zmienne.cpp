/*
 * Zmienne C++
 *
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int a; //deklaracja zmiennej
    float b;
    char znak = 'f'; //deklaracja i inicjacja
    a = b = 0; //inicjacja zmiennej
    bool wynik = false;
    //b = 0;
/*
    cout << a << "  " << b << endl;
    cout << "Podaj wartość a" << endl;
    cin >> a;
    cout << "podaj wartośc b" << endl;
    cin >> b;
    cout << a << "  " << b << endl;
*/

    cout << "Rozmiar w pamięci zmiennych różnych typów" << endl;
    cout << "int\t\t" << sizeof(a) << endl;
    cout << "float\t\t" << sizeof(b) << endl;
    cout << "char\t\t" << sizeof(znak) << endl;
    cout << "bool\t\t" << sizeof(wynik) << " " << wynik << endl;



    return 0;

}
