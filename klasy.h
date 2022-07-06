/**@file Plik nag��wkowy zawieraj�cy deklaracje klas.*/
#ifndef KLASY_H
#define KLASY_H
#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include <iomanip>
#include <windows.h>
#undef max

using namespace std;
/**@brief 
* Klasa abstrakcyjna zawieraj�ca wirtualne metody odpowiedziale za dodawianie, usuwanie i wy�wietlanie cz�ci. 
*/
class Baza
{
public:
    virtual void dodaj() = 0;
    virtual void wyswietl() = 0;
    virtual void usun() = 0;
};
/**@brief
* Klasa zawieraj�ca wsp�lne pola klas pochodnych s�u��ce do opisu danej cz�ci.
*/
class Czesc
{
public:
    string marka;
    string stan;
    string model;
    int cena;
    void dodaj_czesc();
    void usun_czesc(string do_usuniecia);
    void wyswietl_czesc(string nazwa);
};

/**@brief
* Klasa pochodna klas Baza oraz Cz�� s�u�aca do szczeg�owego opisu silnika samochodowego.
*/

class Silnik : public Baza, Czesc
{
    int moc;
    int pojemnosc;
    string typ;
public:
    virtual void dodaj();
    virtual void usun();
    virtual void wyswietl();
};

/**@brief
* Klasa pochodna klas Baza oraz Cz�� s�u�aca do szczeg�owego opisu skrzyni bieg�w.
*/

class Skrzynia : public Baza, Czesc
{
    int l_biegow;
    string rodzaj;
public:
    virtual void dodaj();
    virtual void usun();
    virtual void wyswietl();
};

/**@brief
* Klasa pochodna klas Baza oraz Cz�� s�u�aca do szczeg�owego opisu karosierii samochodowej.
*/

class Karoseria : public Baza, Czesc
{
    string kolor;
    string typ;
public:
    virtual void dodaj();
    virtual void usun();
    virtual void wyswietl();
};

/**@brief
* Klasa pochodna klas Baza oraz Cz�� s�u�aca do szczeg�owego opisu opon.
*/

class Opony :public Baza, Czesc
{
    string rodzaj;
    int profil;
    int szerokosc;
public:
    virtual void dodaj();
    virtual void usun();
    virtual void wyswietl();
};

/**@brief
* Klasa pochodna klas Baza oraz Cz�� s�u�aca do szczeg�owego opisu innego rodzaju cz�ci.
*/

class Inne : public Baza, Czesc
{
    string nazwa;
public:
    virtual void dodaj();
    virtual void usun();
    virtual void wyswietl();
};

/**@brief
* Klasa odpowiedzialna za wyswietlanie kontekstowego menu g��wbnego programu oraz przechodzenie do kolejnych ekran�w programu.
*/

class Menu
{
    string wybor;
public:
    void wyswietl_menu();
    void wybierz_menu();
};

/**@brief
* Klasa odpowiedzialna za wyswietlanie kontekstowego menu magazynu oraz przechodzenie do innych ekran�w programu.
*/

class Magazyn
{
    string wybor_czesci;
    string wybor_opcji;
public:
    void wyswietl_czesci();
    void wybierz_czesc();
    void wyswietl_opcje();
    void funkcja(Baza* x);
    void wybierz_opcje();
};

/**@brief
* Klasa odpowiedzialna za wyswietlanie kontekstowego menu wydruku stanu magazynu oraz przechodzenie do inneych ekran�w programu.
*/

class Wydruk
{
    string wybor;
public:
    int zlicz(string nazwa);
    void wyswietl_stan();
    void wybierz_stan();
    void wygeneruj();
};

/**@brief
* Klasa odpowiedzialna za wyswietlanie kontekstowego menu pomocy oraz powr�t do menu g��wnego.
*/

class Pomoc
{
    string wybor;
public:
    void wyswietl_pomoc();
};
#endif
