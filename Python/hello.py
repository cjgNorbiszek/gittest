#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  hello.py
#  
rok = 2017
py = 1991

def parzyste(liczba):
    ile = list(range(0, liczba + 1, 2))
    print (ile)
    return len(ile)

def main(args):
    
    imie = input("Podaj imie ")
    print ("Hello ", imie)
    
    wiek = int(input("Ile masz lat? "))
    print ("Urodziłeś się w ", 2017-wiek, " roku")
    
    if wiek < (rok-py):
        print ("Jestem starszy")
    elif wiek > (rok-py):
        print ("Jestem młodszy")
    else:
        print ("Mamy tyle samo lat")
    
    liczba = int(input ("Podaj liczbę: "))
    print ("Parzyste: ", parzyste(liczba))
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
