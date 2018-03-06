/*
 * drzewo.cpp
 * 
 * Copyright 2018  <>
 * 
 */


#include <iostream>
#include "drzewo.hpp"

using namespace std;

Lista::Lista() {
    head = NULL;
    tail = NULL;
    i = 0;
}

Lista::~Lista() {
    while(Usun())   {;}; //usuniecie 
}

void dodajWezel(Wezel *wezel, int wartosc) {
    if (korzen == NULL) { // drzewo jest puste!
        korzen = stworzWezel(wartosc); // utworzenie 1. elementu
    } else {
        if (wartosc < wezel->wartosc) { // wstawiamy wartość do lewego poddrzewa
            if(wezel->lewy != NULL) {
                dodajWezel(wezel->lewy, wartosc);  // rekurencyjne wywołanie dodawanie do lewego poddrzewa
            } else {  // lewy potomek nie istnieje
                wezel->lewy = stworzWezel(wartosc);  // tworzymy nowy wezel
            }
        } else { // wstawiamy wartość do prawego poddrzewa
            if(wezel->prawy != NULL) {
                dodajWezel(wezel->prawy, wartosc);  // rekurencyjne wywołanie dodawanie do lewego poddrzewa
            } else {  // prawy potomek nie istnieje
                wezel->prawy = stworzWezel(wartosc);  // tworzymy nowy wezel
            }
        }
    }
}


void wyswietlRosnaco(Wezel *wezel) {
    if (wezel != NULL) { // jeżeli węzeł nie jest pusty
        // rekurencyjnie wyswietl lewe poddrzewo
        wyswietlRosnaco(wezel -> lewy);
        // wypisz wartość aktualnego węzła
        cout << wezel -> wartosc << ", ";
        // rekurencyjnie wyswietl prawe poddrzewo
        wyswietlRosnaco(wezel -> prawy);
    }
}

