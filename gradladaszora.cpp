#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string imie1, imie2;
    cout << "Witam w grze!" << endl;
    cout << "Prosze wybrac graczy" << endl;
    cout << "Imie gracza 1: ";
    cin >> imie1;
    cout << "Imie gracza 2: ";
    cin >> imie2;

    // Inicjalizacja generatora losowego
    srand(time(0));

    // Zmienne przechowujace punkty graczy
    int punkty1 = 0, punkty2 = 0;

    // Rozpoczecie gry
    cout << "Zgadnij wylosowana liczbe!" << endl;

    // Glowna petla gry (5 rund)
    for (int runda = 1; runda <= 5; ++runda) {
        int losowaLiczba = rand() % 100 + 1; // Wylosowanie liczby z zakresu 1-100
        int proba1, proba2; // Proby graczy

        cout << "Runda " << runda << "!" << endl;

        // Ruch gracza 1
        cout << imie1 << ", zgadnij wylosowana liczbe: ";
        cin >> proba1;
        if (proba1 > losowaLiczba) {
            cout << "Twoja liczba jest wieksza od wylosowanej!" << endl;
        } else if (proba1 < losowaLiczba) {
            cout << "Twoja liczba jest mniejsza od wylosowanej!" << endl;
        } else {
            cout << "Gratulacje, zgadles liczbe!" << endl;
            punkty1++; // Gracz 1 zgadl, dodaj punkt
        }

        // Ruch gracza 2
        cout << imie2 << ", zgadnij wylosowana liczbe: ";
        cin >> proba2;
        if (proba2 > losowaLiczba) {
            cout << "Twoja liczba jest wieksza od wylosowanej!" << endl;
        } else if (proba2 < losowaLiczba) {
            cout << "Twoja liczba jest mniejsza od wylosowanej!" << endl;
        } else {
            cout << "Gratulacje, zgadles liczbe!" << endl;
            punkty2++; // Gracz 2 zgadl, dodaj punkt
        }

        // Pokazanie wynikow rundy
        cout << "Wyniki tej rundy:" << endl;
        cout << imie1 << " punkty: " << punkty1 << endl;
        cout << imie2 << " punkty: " << punkty2 << endl;
        cout << "----------------------------------------------------" << endl;
    }


    if (punkty1 > punkty2) {
        cout << imie1 << " wygral gre z " << punkty1 << " punktami!" << endl;
    } else if (punkty1 < punkty2) {
        cout << imie2 << " wygral gre z " << punkty2 << " punktami!" << endl;
    } else {
        cout << "Remis! Obaj gracze zdobyli po " << punkty1 << " punktow!" << endl;
    }

    return 0;
}
