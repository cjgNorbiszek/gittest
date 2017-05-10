

/*
 * tablice.cpp
 *
 *
 */


#include <iostream>

using namespace std;



void wypelnij(char tab[], int rozmiar){

    cout << "Podaj znak: " << endl;
    for(int i = 0; i < rozmiar; i++){
        cin >> tab[i];
    }
}

void drukuj(char tab[], int rozmiar, bool wstecz){
    if(wstecz == true){
        cout << "Zawartość tabeli: " << endl;
        for(int i = rozmiar-1; i >= 0; i--)
        cout << tab[i] << " ";
    }
    else
    cout << "Zawartość tabeli: ";

    for(int i = 0; i < rozmiar; i++){
        cout << tab[i] << " ";
    }

}

int drukuj2(char tab[]){
    int i = 0;
    cout << endl;
    while (tab[i] != '\0'){
        cout << tab[i];
        i++;
    }
    return i;

}

void ascii() {
    for(int i =0; i <128; i++)
        cout << (char)i << " ";
    }

void zamien(char tab[]){
    int i = 0;
    int kodascii = 0;
    while (tab[i] != '\0'){
        kodascii = (int)tab[i];
        if(kodascii > 64 && kodascii < 91)
            tab[i] = char(kodascii + 32);
        else if (kodascii > 89 && kodascii < 123)
            tab[i] = char(kodascii - 32);
            i++;

        }
    }


int main(int argc, char **argv)
{






    int rozmiar = 100;
    char tab[rozmiar];


    //wypelnij(tab, rozmiar);
    cin .getline(tab, rozmiar);
    //drukuj(tab, rozmiar, false);
    //cout<< "Długość tekstu: " << drukuj2(tab);

    //ascii();
    drukuj2(tab);
    zamien(tab);
    drukuj2(tab);


    // cout << tab << endl;
    //cout << tab[0] << endl;
    //cout << tab[9] << endl;
	return 0;
}

