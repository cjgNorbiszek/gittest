/*
 * silnia.cpp
 *
 *
 *
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{

    int a, b = 0;

    cout << "Podaj wybraną liczbę:" << endl;
    cin >> a;

    for(int i = 0; i <=a; i++){
        cout << i << " ";
        b = b + 1
    }
    cout << "Parzyste" << endl;
    b = 0;
    for(int i = 0; i <=a; i = 2 * i + 1){
        b += i;
        cout << i << " ";
    }
    cout << "Niearzyste" << endl;

    b = 0;
    for(int i = 0; i <=a; i += 5 ){
        b += i;
        cout << i << " ";
        b = b + 1
    }
    cout << "Podzielne przez 5" << endl;

	return 0;
}
