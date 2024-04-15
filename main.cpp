#include <iostream>
using namespace std;
//Zad.10
class FunkcjaKwadratowa2 {
private:
    double a, b, c;

public:
    FunkcjaKwadratowa2(double _a, double _b, double _c) {
        a=(_a);
        b=(_b);
        c=(_c) ;
    }
    void wyswietlFunkcje() {
        std::cout << "f(x) = " << a << "x^2 + " << b << "x + " << c << std::endl;
    }
};
//Zad.11
class Podatnik {
private:
    string imie;
    string nazwisko;
    double podstawa_podatku;

public:

    Podatnik(string _imie, string _nazwisko, double _podstawa_podatku) {
        imie=(_imie);
        nazwisko=(_nazwisko);
        podstawa_podatku=(_podstawa_podatku);
    }
    double obliczPodatek() {
        const double kwota_zmniejszajaca_podatek = 556.02;
        const double stawka_podatkowa = 0.18;

        double podatek = podstawa_podatku * stawka_podatkowa - kwota_zmniejszajaca_podatek;
        if (podatek < 0) {
            cout << "podaj normalny podatek";
            return 0;
        }
        return podatek;
    }
};
//Zad.12
class Pracownik {
public:
    string imie;
    string nazwisko;
    string ulica;
    string nr_domu;
    string kod_pocztowy;
    string miejscowosc;
    Pracownik(string _imie, string _nazwisko, string _ulica, string _nr_domu, string _kod_pocztowy, string _miejscowosc){
        imie=(_imie);
        nazwisko=(_nazwisko);
        ulica=(_ulica);
        nr_domu=(_nr_domu);
        kod_pocztowy=(_kod_pocztowy);
        miejscowosc=(_miejscowosc);
    }
    void wyswietlWizytowke() {
        cout << "----------------------" << endl;
        cout << imie << " " << nazwisko << endl;
        cout << "ul. " << ulica << " " << nr_domu << endl;
        cout << kod_pocztowy << " " << miejscowosc << endl;
        cout << "----------------------" << endl;
    }
};
//Zad.13
class Rachunek {
public:
    string data;
    double wartosc_netto;
    double podatek;
    double wartosc_brutto;

    Rachunek(string _data, double _wartosc_netto, double _podatek, double _wartosc_brutto){
        data=(_data);
        wartosc_netto=(_wartosc_netto);
        wartosc_brutto=(_wartosc_brutto);
    }

    void wczytajDane(string _data, double _wartosc_netto) {
        data = _data;
        wartosc_netto = _wartosc_netto;
    }

    void obliczPodatek() {
        const double stawka_podatkowa = 0.23;
        podatek = wartosc_netto * stawka_podatkowa;
        wartosc_brutto = wartosc_netto + podatek;
    }

    void wyswietlRachunek() {
        cout << "Data: " << data << endl;
        cout << "Wartosc netto: " << wartosc_netto << " zl" << endl;
        cout << "Podatek: " << podatek << " zl" << endl;
        cout << "Wartosc brutto: " << wartosc_brutto << " zl" << endl;
    }
};
//Zad.14
class Uczen {
public:
    string imie;
    string nazwisko;
    int liczba_pytan;
    int poprawne_odp;

    void wczytajDane(string _imie, string _nazwisko, int _liczba_pytan, int _poprawne_odp) {
        imie = _imie;
        nazwisko = _nazwisko;
        liczba_pytan = _liczba_pytan;
        poprawne_odp = _poprawne_odp;
    }

    double obliczProcentPoprawnych() {
        if (liczba_pytan == 0) {
            return 0.0;
        }
        return static_cast<double>(poprawne_odp) / liczba_pytan * 100.0;
    }
};

int main() {
    //Zad.10
    cout << "<<Zadanie 10>> " << endl;
    double a, b, c;
    cout << "Podaj wspolczynniki funkcji kwadratowej (a, b, c): ";
    cin >> a >> b >> c;
    FunkcjaKwadratowa2 funkcja(a, b, c);
    funkcja.wyswietlFunkcje();
    //Zad.11
    cout << "<<Zadanie 11>> " << endl;
    string imie, nazwisko;
    double podstawa_podatku;
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    cout << "Podaj podstawe obliczenia podatku: ";
    cin >> podstawa_podatku;
    Podatnik podatnik(imie, nazwisko, podstawa_podatku);
    double podatek = podatnik.obliczPodatek();
    cout << "Podatek dochodowy dla " << imie << " " << nazwisko << " wynosi: " << podatek << " zl" << endl;
    //Zad.12
    cout << "<<Zadanie 12>> " << endl;
    string imie1, nazwisko1, ulica, nr_domu, kod_pocztowy, miejscowosc;
    cout << "Podaj imie: ";
    cin >> imie1;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko1;
    cout << "Podaj ulice: ";
    cin >> ulica;
    cout << "Podaj numer domu: ";
    cin >> nr_domu;
    cout << "Podaj kod pocztowy: ";
    cin >> kod_pocztowy;
    cout << "Podaj miejscowosc: ";
    cin >> miejscowosc;
    Pracownik pracownik(imie, nazwisko, ulica, nr_domu, kod_pocztowy, miejscowosc);
    pracownik.wyswietlWizytowke();
    //Zad.13
    cout << "<<Zadanie 13>> " << endl;
    Rachunek rachunek("2024-04-15", 1000, 230, 1230);
    rachunek.obliczPodatek();
    rachunek.wyswietlRachunek();
    //Zad.14
    cout << "<<Zadanie 14>> " << endl;
    Uczen uczen;
    string imie2, nazwisko2;
    int liczba_pytan, poprawne_odp;

    cout << "Podaj imie ucznia: ";
    cin >> imie2;
    cout << "Podaj nazwisko ucznia: ";
    cin >> nazwisko2;
    cout << "Podaj liczbe pytan: ";
    cin >> liczba_pytan;
    cout << "Podaj liczbe poprawnych odpowiedzi: ";
    cin >> poprawne_odp;

    uczen.wczytajDane(imie2, nazwisko2, liczba_pytan, poprawne_odp);
    double procent_poprawnych = uczen.obliczProcentPoprawnych();
    cout << "Procent poprawnych odpowiedzi: " << procent_poprawnych << "%" << endl;
    return 0;

}
