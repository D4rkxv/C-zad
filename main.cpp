#include <iostream>
using namespace std;
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

int main() {
    double a, b, c;
    string imie, nazwisko;
    double podstawa_podatku;
    cout << "Podaj wspolczynniki funkcji kwadratowej (a, b, c): ";
    cin >> a >> b >> c;
    FunkcjaKwadratowa2 funkcja(a, b, c);
    funkcja.wyswietlFunkcje();
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    cout << "Podaj podstawe obliczenia podatku: ";
    cin >> podstawa_podatku;
    Podatnik podatnik(imie, nazwisko, podstawa_podatku);
    double podatek = podatnik.obliczPodatek();
    cout << "Podatek dochodowy dla " << imie << " " << nazwisko << " wynosi: " << podatek << " zl" << endl;
    return 0;
}
