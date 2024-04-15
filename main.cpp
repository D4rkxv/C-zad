#include <iostream>
#include <valarray>

using namespace std;
class pprospopadloscian{
public:
    int a,b,c;

    pprospopadloscian(int bok1,int bok2, int bok3) {
        a = bok1;
        b = bok2;
        c = bok3;

    }
    int liczPole(){
    int result =  (2 * a * b) + (2 * b * c )+(2 * a * c);
        return(result);
    }
    int liczObj(){
        int result =  a*b*c;
        return(result);}
};

class kula{
public:
    double pi = 3.14;
    int r;

    kula(int sred){
        r = sred;
    }
    int liczKul(){
        pi = 3.14;
        double result = 4 * pi * r * 2;
        return(result);
    }
    int liczObj(){
        double result = 4/3 * pow(pi,3);
                return(result);
    }

};
class walec{
public:
    double pi = 3.14;
    int r1,h;
    walec(int sred,int wys){
        r1 = sred;
        h = wys;
    }
    int liczwal(){
        double result = (2 * pi * r1 * h )+ 2 * pi * sqrt(pi);
        return(result);
    }
    int liczobj(){
        double result = pi * sqrt(r1) * h;
    }
};
class stozek{
public:
    double pi =3.14;
    int r2,l,h1;

    stozek(int sred, int bok, int wys){
        r2 = sred;
        l = bok;
        h1 = wys;
    }
    int liczstoz(){
        double result = pi * sqrt(r2) + pi * r2 * l;
        return(result);
    }
    int liczobj(){
        double result = 1/3 * pi * sqrt(r2)* h1;
        return(result);
    }
};

class FunkcjaKwadratowa {
public:
    double a, b, c;

    FunkcjaKwadratowa(double _a, double _b, double _c) {
    a=(_a);
    b=(_b);
    c=(_c) ;
    }
    double obliczWartosc(double x) {
        return a * x * x + b * x + c;
    }
};
int main() {
    cout << "Podaj boki prostopadloscianu" << endl;
    int a;
    int b;
    int c;
    cout << "podaj srednice" << endl;
    int r;
    cout << "podaj srednice i wysokosc  walca" << endl;
    int r1;
    int h;
    cout << " podaj sred i bok stozka" << endl;
    int r2;
    int l;
    int h1;
    cout << "Podaj wspolczynniki funkcji kwadratowej (a, b, c): ";
    double a1, b1, c1, x1;


    cin >> a >> b>> c;
    cin >> r;
    cin >> r1 >> h;
    cin >> r2 >> l >> h;
    cin >> a1 >> b1 >> c1;
    pprospopadloscian liczPole(a,b,c);
    kula liczKul(r);
    walec liczwal(r1,h);
    stozek liczsto(r2,l, h1);
    FunkcjaKwadratowa funkcja(a1, b1, c1);
    cout << "Podaj punkt, w ktorym chcesz obliczyc wartosc funkcji: ";
    cin >> x1;
    double wynik = funkcja.obliczWartosc(x1);
    cout << "Wartosc funkcji w punkcie " << x1 << " wynosi: " << wynik << endl;


    cout << "objetosc to " << liczPole.liczObj() << endl;
    cout << "pole to " << liczPole.liczPole() << endl;
    cout << "pole kuli to" << liczKul.liczKul() << endl;
    cout << "objetosc kuli to" << liczKul.liczObj()<< endl;
    cout << "pole walca to " << liczwal.liczwal() << endl;
    cout << "objetosc walca to " << liczwal.liczobj() << endl;
    cout << "pole stozka to " << liczsto.liczstoz() << endl;
    cout << "objetosc stozka to " << liczsto.liczobj() << endl;


    return 0;



}