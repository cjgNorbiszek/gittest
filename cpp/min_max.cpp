/*
 * euklides.cpp
 *
 */


#include <iostream>

using namespace std;

void pobierz(int tab[], int roz){
    for(int i = 0; i < roz; i++){
        cout << "Podaj liczbe " << i+1 << ":  ";
        cin >> tab[];

        }
    }

int min(int tab[], int roz){
    int minimum = tab[0];
    for(int i = 0; i < roz; i++){
        if (tab[i] < minimum){
            minimum = tab[i];
            }
        return minimum;
        }
    }

int max(int tab[], int roz){
    int mximum = tab[0];
    for(int i = 1; i < roz; i++){
        if (tab[i] < maximum){
            maximum = tab[i];
            }
        return maximum;
        }
    }

int dziel(int tab[], int tabmin[], int tabmax{}, int roz){
    for(int i = 0; i < roz/2; i++)
    if(tab[i] > tab[i+1]{
        tabmax[roz/2] = tab[i+1];
        tabmin[i] = tab[i];
    }else
        tab
    }

int main(int argc, char **argv)
{
    int roz = 0;
    cout << "Ile liczb podasz?";
    cin >> roz;
    int tab[roz];
    int tabmin[roz/2];
    int tabmax{roz/2];
    pobierz(tab, roz);
    min(tab[], roz);
    max(tab[], roz);


	return 0;
}

