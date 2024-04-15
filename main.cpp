#include <iostream>
#include <cmath>

using namespace std;
//Zad.1,2
class Prostopadloscian {
public:
    int a, b, c;
    Prostopadloscian(int bok1, int bok2, int bok3) {
        a = bok1;
        b = bok2;
        c = bok3;
    }

    int liczPole() {
        return (2 * a * b) + (2 * b * c) + (2 * a * c);
    }

    int liczObj() {
        return a * b * c;
    }
};
//Zad.3,4
class Kula {
public:
    double pi = 3.14;
    int r;

    Kula(int sred) {
        r = sred;
    }

    double liczKul() {
        return 4 * pi * r * r;
    }

    double liczObj() {
        return (4.0 / 3.0) * pi * r * r * r;
    }
};
//Zad.5,6
class Walec {
public:
    double pi = 3.14;
    int r, h;

    Walec(int sred, int wys) {
        r = sred;
        h = wys;
    }

    double liczwal() {
        return (2 * pi * r * h) + (2 * pi * r * r);
    }

    double liczobj() {
        return pi * r * r * h;
    }
};
//Zad.7,8
class Stozek {
public:
    double pi = 3.14;
    int r, l, h;

    Stozek(int sred, int bok, int wys) {
        r = sred;
        l = bok;
        h = wys;
    }

    double liczstoz() {
        return pi * r * (r + l);
    }

    double liczobj() {
        return (1.0 / 3.0) * pi * r * r * h;
    }
};
//Zad.9,10
class FunkcjaKwadratowa {
public:
    double a, b, c;

    FunkcjaKwadratowa(double _a, double _b, double _c) {
        a = _a;
        b = _b;
        c = _c;
    }

    double obliczWartosc(double x) {
        return a * x * x + b * x + c;
    }
};

int main() {
    cout << "<<Zadanie 1,2>> " << endl;
    cout << "Podaj boki prostopadloscianu: ";
    int a, b, c;
    cin >> a >> b >> c;
    Prostopadloscian prostopadloscian(a, b, c);
    cout << "Pole prostopadloscianu: " << prostopadloscian.liczPole() << endl;
    cout << "Objetosc prostopadloscianu: " << prostopadloscian.liczObj() << endl;
    cout << "<<Zadanie 3,4>> " << endl;
    cout << "Podaj srednice kuli: ";
    int r;
    cin >> r;
    Kula kula(r);
    cout << "Pole kuli: " << kula.liczKul() << endl;
    cout << "Objetosc kuli: " << kula.liczObj() << endl;
    cout << "<<Zadanie 5,6>> " << endl;
    cout << "Podaj srednice i wysokosc walca: ";
    int r1, h;
    cin >> r1 >> h;
    Walec walec(r1, h);
    cout << "Pole walca: " << walec.liczwal() << endl;
    cout << "Objetosc walca: " << walec.liczobj() << endl;
    cout << "<<Zadanie 7,8>> " << endl;
    cout << "Podaj srednice, bok i wysokosc stozka: ";
    int r2, l, h1;
    cin >> r2 >> l >> h1;
    Stozek stozek(r2, l, h1);
    cout << "Pole stozka: " << stozek.liczstoz() << endl;
    cout << "Objetosc stozka: " << stozek.liczobj() << endl;
    cout << "<<Zadanie 9,10>> " << endl;
    cout << "Podaj wspolczynniki funkcji kwadratowej (a, b, c): ";
    double a1, b1, c1;
    cin >> a1 >> b1 >> c1;
    FunkcjaKwadratowa funkcja(a1, b1, c1);
    cout << "Podaj punkt, w ktorym chcesz obliczyc wartosc funkcji: ";
    double x1;
    cin >> x1;
    double wynik = funkcja.obliczWartosc(x1);
    cout << "Wartosc funkcji w punkcie " << x1 << " wynosi: " << wynik << endl;

    return 0;
}
