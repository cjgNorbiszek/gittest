/*
 * szefyr_cesara.cpp
 *
 */


#include <iostream>

using namespace std;

void lower(char tekst[]){
// funkcja zamienia du¿e litery na ma³e
  // u¿yj pêtli do odczytywania kolejnych znaków
  //sprawdŸ kod ASCII znaku
  // je¿eli kod odpowiada du¿ej literze, podmieñ znak;

}

void szyfruj(char tekst[], int klucz) {
    int i = 0;
    klucz = klucz % 26;
    while (tekst[i] != '\0') {
        tekst[i] = (char)((int)tekst[i] + klucz);
        //(int)tekst[i] - rzutowanie na kod ASCII
        //(char)((int)tekst[i]) - zmiana kodu ASCII na znak
        i++;
    }
    cout << tekst;
}


int main(int argc, char **argv)
{
    char tekst[100];
    int klucz = 3;
	cout << "Podaj tekst do zaszyfrowania: " << endl;
    cin >> tekst;
    cout << "Podaj klucz: ";
    cin >> klucz;
    szyfruj(tekst, klucz);
	return 0;
}


