/*
 * euklides.cpp
 *
 */


#include <iostream>

using namespace std;

int nwd1(int a, int b){
    int p = 0;
    while(a != b){
        if(a > b)
            a -= b;
        else
            b -=a;
        p++;
    }
    cout << "Powtorzen: " << p << endl;
    return a;
}

int nwd2(int a, int b){
    int p = 0;
    while(a > 0){
        a %= b;
        b -= a;
        p++;
    }
    cout << "Powtorzen: " << p << endl;
    return b;
}

int nwd3(int a, int b){
    if(a == b) return a;
    if(a > b) return nwd3(a - b, b);
    return nwd3(a, b - a);

}

int nwd4(int a, int b){
    if(a > 0)
}

int main(int argc, char **argv)
{

    int a, b = 0;
    cout << "Podaj dwie liczby" << endl;
    cin >> a >> b;
    cout << "Klasycznie: " << nwd1(a, b) << endl;
    cout << "Optymalnie: " << nwd2(a, b) << endl;
    cout << "Klasycznie rek: " << nwd3(a, b) << endl;


	return 0;
}

