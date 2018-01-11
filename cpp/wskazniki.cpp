/*
 * wskazniki.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int x =11;
    cout << x << endl;
    cout << &x << endl; // adres zmiennej w pamięci
    cout << * &x << endl; // wartośc zmiennej pod adresem
    
    int *px; // defkinicja wskaźnika do typu całkowitego
    px = &x; //inicjacja wskaźnika
    // wskaznik zawsze zawiera adres w pamięci
    cout << px << endl;
    cout << *px << endl;
    
	int y = 100;
    px = &y;
    cout << px << endl;
    cout << *px << endl;
        
	return 0;
}

