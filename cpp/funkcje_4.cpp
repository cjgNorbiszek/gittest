/*
 * funkcje_4.cpp
 *
 * Copyright 2016 user <user@lap79>
 *
 *
 */


#include <iostream>

using namespace std;

int zlicz(int licznik){
    return ++licznik;
    }


int main(int argc, char **argv)
{
    int liczba, ujemne, dodatnie = 0;

    do{
        cout << "Podaj liczbę: " << endl;
        cin >> liczba;
        if (liczba >= 0)
            dodatnie = zliczaj(dodatnie);
        else
            ujemnie = zliczaj(ujemne);
    }while(liczba != 0);
    cout << "Dodatnich: " << dodatnie << "Ujemne: " << ujemne << endl;
	return 0;
}

