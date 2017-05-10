/*
 * funkcje_3.cpp
 *
 * Copyright 2016 user <user@lap79>
 *
 *
 */


#include <iostream>

using namespace std;

float sumakwadratu(float a){
    float sumakwadratu = a*a;
    return sumakwadratu;
}


int main(int argc, char **argv)
{
    int a, b = 0;

    cout << "Podaj bok kwadratu ";
    cin >> a;
    cout<< "Podaj wysokość ";
    cin >> b;

       cout << "Pole powierzchni prostopadłościanu: " << 2*sumakwadratu(a) + 4*(a*b) << endl;

	return 0;
}

