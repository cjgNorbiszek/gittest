#ifndef DRZEWO_HPP
#define DRZEWO_HPP

struct ELEMENT{
    int wartosc;
    ELEMENT *wskaznik;
};vv

class Wezel{
private:
    
public:
    
    Drzewo();
    ~Drzewo();
    
    void Dodaj(int);
    void Wyswietl();
    void Wstaw(int, int); // wstawia element na podanej pozycji
    
    
    bool Usun();
};

#endif
