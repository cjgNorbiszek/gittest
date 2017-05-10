/*
 * cw2.cpp
 *
 *
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{

    int a = 0;

    cout << "Podaj liczbę " << endl;
    cin >> a;

    for(int i = 0; i <= a; i++)
    cout << i*i << " ";

	return 0;
}
