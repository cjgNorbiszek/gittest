#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  uczniowie.py

import sqlite3

def wyniki(cur):
    wyniki = cur.fetchall() #pobierz wszystkie wiersze
    for row in wyniki:
        print(tuple(row))

def kw_a(cur):

    
    cur.execute("""
        SELECT imie, nazwisko, tbklasy.klasa
        FROM tbUczniowie, tbklasy
        WHERE tbuczniowie.klasaid = tbklasy.idklasy
        AND tbklasy.klasa = '1A'
        
    """)
    wyniki(cur)
        
def kw_b(cur):

    
    cur.execute("""
        SELECT MAX (egzhum)
        FROM tbuczniowie
        
    """)
    wyniki(cur)
        
def kw_c(cur):

    
    cur.execute("""
    SELECT AVG(egzmat)
    FROM tbuczniowie, tbklasy
    WHERE tbuczniowie.klasaid = tbklasy.idklasy
    AND tbklasy.klasa = '1A'
        
    """)
    wyniki(cur)
def kw_d(cur):

    
    cur.execute("""
    SELECT imie, nazwisko, ocena
    FROM tbUczniowie, tboceny
    WHERE tbuczniowie.iducznia = tboceny.uczenid
    AND imie = 'Dorota'
    AND nazwisko = 'Nowak'
    

        
    """)
    wyniki(cur)
        
def kw_e(cur):

    
    cur.execute("""
    SELECT AVG(ocena)
    FROM tboceny
    WHERE strftime('%m', datad) LIKE '10' 
    AND przedmiotid = 6
    

        
    """)
    wyniki(cur)
def kw_f(cur):

    
    cur.execute("""
    UPDATE tbuczniowie 
    SET egzjez = 35
    WHERE imie = 'Paulina'
    AND nazwisko = 'Dziedzic'
    """,[35, 'Paulina',])
    cur.execute("""
    SELECT egzjez
    SET tbuczniowie
    WHERE imie = 'Paulina'
    AND nazwisko = 'Dziedzic""")

    

        
def kw(cur):

    
    cur.execute("""
    SELECT egzjez
    SET tbuczniowie
    WHERE imie = 'Paulina'
    AND nazwisko = 'Dziedzic'

    

        
    """)
    wyniki = cur
    
def dodaj(cur):
    cur.execute("""
        INSERT INTO tbklasy
        VALUES (?, ?, ?, ?)
    """, [None, '3C', 2015, 2017])
    
def aktu(cur):
    cur.execute("""
        UPDATE tbklasy
        SET klasa = ?
        WHERE idklasy = ?
    """, ['3D', 13])
    
def usun(cur):
    cur.execute('DELETE FROM tbklasy WHERE klasa = ? AND roknaboru = ?', ['3B', 2015])


def main(args):
    con = sqlite3.connect('szkola.db')
    cur = con.cursor() #utworzenie kursora
    con.row_factory = sqlite3.Row
    
    #dodaj(cur)
    #aktu(cur)
    usun(cur)
    con.commit()
    wyniki(cur.execute('SELECT * FROM tbklasy'))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
