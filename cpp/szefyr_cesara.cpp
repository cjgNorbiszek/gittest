/*
 * szefyr_cesara.cpp
 *
 */


#include <iostream>

using namespace std;

void lower(char tekst[]){
// funkcja zamienia duże litery na małe
  // użyj pętli do odczytywania kolejnych znaków
  //sprawdź kod ASCII znaku
  // jeżeli kod odpowiada dużej literze, podmień znak;

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


