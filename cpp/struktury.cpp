/*
 * struktury.cpp
 * 
 */


#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
/*
struct osoba {
    char imie[30];
    char nazwisko[30];
    int wiek;
};
*/
struct samochod {
    char marka[30];
    char model[30];
    int rocznik;
};
/*
void wyswietlDane(osoba o) {
    cout << setw(20) << "Imię: " << o.imie << endl;
    cout << setw(20) << "Nazwisko: " << o.nazwisko << endl;
    cout << setw(20) << "Wiek: " << o.wiek << endl;
}
*/
void wyswietlDane1(samochod o) {
    cout << setw(20) << left << "Marka: " << setw(10) << right << o.marka << endl;
    cout << setw(20) << left << "Model: " << setw(10) << right <<  o.model << endl;
    cout << setw(20) << left << "Rocznik: " << setw(10) << right << o.rocznik << endl;
}

void get0samochody(samochod t[], int ile) {
    for(int i=0; i < ile; i++) {
    cout << "Podaj marke: ";
    cin >> t[i].marka;
    cout << "Podaj model: ";
    cin >> t[i].model;
    cout << "Podaj rocznik: ";
    cin >> t[i].rocznik;
    
    }
}

void drukuj0samochody(samochod t[], int ile) {
    for(int i=0; i < ile; i++) {
    cout << setw(20) << left << "Marka: " << setw(10) << right << t[i].marka << endl;
    cout << setw(20) << left << "Model: " << setw(10) << right <<  t[i].model << endl;
    cout << setw(20) << left << "Rocznik: " << setw(10) << right << t[i].rocznik << endl << endl;
    
    }
}

void zapiszdane(samochod t[], int ile){
    ofstream plik("samochod.txt", ios::app);
    if (!plik.is_open()){
        cout << "Błąd otwarcia pliku!";
    } else{
        for(int i=0; i < ile; i++) {
            cout << t[i].marka << "," << t[i].model << "," << t[i].rocznik << endl;
            plik << t[i].marka << "," << t[i].model << "," << t[i].rocznik << endl;
        }
    }
    
}

int czytajdane(samochod t[]) {
    ifstream plik("samochod.txt");
    string linia;
    int i =0;
    if (plik.is_open()) {
        while(getline(plik, linia)){
            cout << linia << endl;
            i++; //liczymy przeczytane rekordy
        }
    } else {
        cout << "Błąd otwarcia pliku!";
    }
    return i;
}

int main(int argc, char **argv)
{
/*
    osoba uczen1;
    cout << "Podaj imię: ";
    cin >> uczen1.imie;
    cout << "Podaj nazwisko: ";
    cin >> uczen1.nazwisko;
    cout << "Podaj wiek: ";
    cin >> uczen1.wiek;
    wyswietlDane(uczen1);
*/
/*
	samochod auto1;
    cout << "Podaj pojemność silnika: ";
    cin >> auto1.pojemnosc_silnika;
    cout << "Podaj rodzaj paliwa: ";
    cin >> auto1.model;
    cout << "Podaj rocznik: ";
    cin >> auto1.rocznik;
    wyswietlDane1(auto1);
  */
    int ile;
    cout << "Ile samochodów: "; cin >> ile;
    samochod tb[ile];
    //get0samochody(tb, ile);
    //drukuj0samochody(tb, ile);
    //zapiszdane(tb ,ile);
    cout << czytajdane(tb) << endl;
    
	return 0;
}

