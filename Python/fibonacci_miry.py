#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  horner.py


def fibonacci(n):
    wynik  = 1
    a = 0
    b = 1
    for i in range(n-1):
        wynik = a + b
        a = b
        b = wynik
    return wynik

def fibrek(n):
    if(n == 0):
        return 0
    if(n == 1):
        return 1
    return fibrek(n - 1) + fibrek(n - 2)

def main(args):
    n = 0
    n = int(raw_input("Podaj liczbę: "))
    print "fibonacci: " , fibonacci(n)
    print "fibonacci: " , fibrek(n)

    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
