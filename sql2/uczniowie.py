#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  uczniowie.py

import sqlite3

def kw_a(cur):

    
    cur.execute("""
        SELECT imie, nazwisko, tbklasy.klasa
        FROM tbUczniowie, tbklasy
        WHERE tbuczniowie.klasaid = tbklasy.idklasy
        AND tbklasy.klasa = '1A'
        
    """)
    wyniki = cur.fetchall() #pobierz wszystkie wiersze
    for row in wyniki:
        print(tuple(row))
        
def kw_b(cur):

    
    cur.execute("""
        SELECT MAX (egzhum)
        FROM tbuczniowie
        
    """)
    wyniki = cur.fetchall() #pobierz wszystkie wiersze
    for row in wyniki:
        print(tuple(row))
        
def kw_c(cur):

    
    cur.execute("""
    SELECT AVG(egzmat)
    FROM tbuczniowie, tbklasy
    WHERE tbuczniowie.klasaid = tbklasy.idklasy
    AND tbklasy.klasa = '1A'
        
    """)
    wyniki = cur.fetchall() #pobierz wszystkie wiersze
    for row in wyniki:
        print(tuple(row))
        
def kw_d(cur):

    
    cur.execute("""
    SELECT imie, nazwisko, ocena
    FROM tbUczniowie, tboceny
    WHERE tboceny.uczenid = tboceny.uczenid
    AND imie = 'Dorota'
    

        
    """)
    wyniki = cur.fetchall() #pobierz wszystkie wiersze
    for row in wyniki:
        print(tuple(row))


def main(args):
    con = sqlite3.connect('szkola.db')
    cur = con.cursor() #utworzenie kursora
    con.row_factory = sqlite3.Row
    
    kw_d(cur)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
