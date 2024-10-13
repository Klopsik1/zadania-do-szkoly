#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b;
    int wybor;

    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;
    cout << "====================================" << endl;
    cout << "Kalkulator" << endl;
    cout << "====================================" << endl;
    cout << "ten kalkulator obliczy 8 prostych dzialan matematycznych" << endl;
    cout << "====================================" << endl;
    cout << "1. Dodawanie" << endl;
    cout << "2. Odejmowanie" << endl;
    cout << "3. Mnozenie" << endl;
    cout << "4. Dzielenie" << endl;
    cout << "5. Potegowanie" << endl;
    cout << "6. Pierwiastkowanie" << endl;
    cout << "7. Modulo" << endl;
    cout << "8. Reszta z dzielenia" << endl;
    cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;

    cout << "Wybierz dzialanie: ";
    cin >> wybor;

    switch(wybor)
    {
        case 1:
            cout << "Wynik dodawania: " << a + b << endl;
            break;
        case 2:
            cout << "Wynik odejmowania: " << a - b << endl;
            break;
        case 3:
            cout << "Wynik mnozenia: " << a * b << endl;
            break;
        case 4:
            if(b == 0)
            {
                cout << "Nie dzielimy przez 0!" << endl;
            }
            else
            {
                cout << "Wynik dzielenia: " << a / b << endl;
            }
            break;
        case 5:
            cout << "Wynik potegowania: " << pow(a, b) << endl;
            break;
        case 6:
            if(a < 0)
            {
                cout << "Nie mozna pierwiastkowac liczby ujemnej!" << endl;
            }
            else
            {
                cout << "Pierwiastek z pierwszej liczby: " << sqrt(a) << endl;
                cout << "Pierwiastek z drugiej liczby: " << sqrt(b) << endl;
            }
            break;
        case 7:
            cout << "Wynik modulo: " << fmod(a, b) << endl;
            break;
        case 8:
            cout << "Reszta z dzielenia: " << fmod(a, b) << endl;
            break;
        default:
            cout << "Zly wybor!" << endl;
    }

    return 0;
}
