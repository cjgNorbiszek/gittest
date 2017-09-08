/*
 * hello.cpp
 * 
 * Copyright 2017  <>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>

using namespace std;

#define rok 2017
#define cpp 1983

int parzyste(int liczba){
    int i;
    for(i = 0; i <= liczba; i +=2)
        cout << i << " ";
    return i/2;
    
    }

int main(int argc, char **argv)
{
    string imie;
    int wiek, liczba;
        
    cout << "Podaj imię: ";
    cin >> imie;
    cout << "Hello " << imie << endl;
    
    cout << "Ile masz lat? ";
    cin >> wiek;
	cout << "Urodziłeś się w " << 2017-wiek << " roku" << endl; 
    
    if(wiek < rok-cpp)
        cout << "Jestem starszy" << endl;
    else if( wiek > rok-cpp)
        cout << "Jestem młodszy" << endl;
    else{
        cout << "Mamy tyle samo lat";
    }
    
    cout << "Podaj liczbę: ";
    cin >> liczba;
    cout << "Ilość liczb parzystych: " << parzyste(liczba) << endl;
    
    
    
	return 0;
}

