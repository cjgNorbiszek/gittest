/*
 * petlafor.cpp
 *
 *
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{

    int a = 0;

    cout << "Podaj wybraną liczbę" << endl;
    cin >> a;

    for (int i = 0; i <= a ; i = 2 * i + 3)
        cout << i << " "<< endl;


	return 0;
}
