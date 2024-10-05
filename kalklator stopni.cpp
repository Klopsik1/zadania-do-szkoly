#include <iostream>;
using namespace std;

int main() {
    double stopniefarenheita, stopniecelcjusza, stopnieklevina;
    cout <<"podaj iloscstopni farenheita: ";
    cin  >> stopniefarenheita;
    stopniecelcjusza = (stopniefarenheita - 32) * 5 / 9;
    stopnieklevina = stopniecelcjusza + 273;
    cout << "w stopniach celcujsza" << stopniecelcjusza << endl;
    cout << "w stopniach kelvina" << stopnieklevina << endl;
    return 0;
}
