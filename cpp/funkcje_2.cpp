/*
 * funkcje_1.cpp
 *
 * Copyright 2016 user <user@lap79>
 *
 *
 */


#include <iostream>

using namespace std;

float sumakwadrat(float a, float b){
    float sumakwadrat = a*a + b*b;
    return sumakwadrat;
}


int main(int argc, char **argv)
{
    int a, b, c = 0;

    cout << "Podaj trzy liczby ";
    cin >> a >> b >> c;

    if(sumakwadrat(a, b) == c*c)
        cout << "Można zbudować trójkąt" << endl;
    else
        cout << "Nie można zbudować trójkąta" << endl;

	return 0;
}

