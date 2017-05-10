/*
 * trojka
 *
 *
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{

    int a = 0;

    cout << "Podaj wynik testu" << endl;
    cin >> a;

    if (a > 0 && a < 30)
        cout << "Grupa początkująca" << endl;
    else if (a > 31 && a < 60)
        cout << "Grupa podstawowa" << endl;
    if (a > 59 && a <= 100)
        cout << "Grupa zaanwansowana" << endl;
    else
        cout << "Niemożliwe" << endl;



	return 0;
}
