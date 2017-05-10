/*
 * funkcje_1.cpp
 *
 * Copyright 2016 user <user@lap79>
 *
 *
 */


#include <iostream>

using namespace std;

int sumakwadrat(int a, int b, int c){
    if(a + b > c && a + c >b && b + c > a)
        cout << "Da się zbudować trójkąt" << endl;
    else
        cout << "Nie można zbudować trójkąta!" << endl;

}


int main(int argc, char **argv)
{
    int a, b, c = 0;

    cout << "Podaj trzy boki ";
    cin >> a >> b >> c;

    cout << " " << sumakwadrat(a, b, c) << endl;

	return 0;
}

