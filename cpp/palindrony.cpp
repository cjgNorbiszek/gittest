

/*
 * tablice.cpp
 *
 *
 */


#include <iostream>

using namespace std;

void licz_znaki(char tab[]){
    int sz1, sz2, sz3, sz4;
    sz1 = sz2 = sz3 = sz4 = 0;
    int i = 0; //indeks tabeli
    while (tab[i] !='\0'){
        switch(tab[i]){
            case ',':
                sz1++;
            break;
            case '.':
                sz2++;
            break;
            case ' ':
                sz3++;
            break;
            default:
                sz4++;
        }
        i++; //powiększ i o jeden

    }
    cout << "Przecinki: " << sz1 << endl;
    cout << "Kropki: " << sz2 << endl;
    cout << "Spacje: " << sz3 << endl;
    cout << "Inne znaki: " << sz4 << endl;
}

void czy_palidrom(char tab[]){
    for(int i = 0; i < rozmiar / 2; i++) {
        cout << tab[i] << " " <<  tab[rozmiar - 1 - i];
    }
}

int main(int argc, char **argv)
{

    int rozmiar = 100;
    char tab[rozmiar];


    cin .getline(tab, rozmiar);
    cout << tab << endl;
    czy_palidrom(tab);

	return 0;
}

