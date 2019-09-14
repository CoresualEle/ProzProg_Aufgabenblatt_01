#include "Task_00.h"

// Szenario: Preis = 149€, Menge = 200, Einwohner = 10.000
// Ziel: Umsatz pro Einwohner
void Task_00() {
// Variable deklarieren + initialisieren
    int preis = 149;

    // Deklaration; Bei gleichen Datentyp mehrere in einer Zeile
    int menge, einwohner;

    // Initialisierung (Wertzuweisung)
    menge = 200;
    einwohner = 10000;

    // Variablendeklaration + Berechnung + Zuweisung
    int umsatz = menge * preis;

    int umsatzProEinwohner = umsatz / einwohner;

    printf("Das Ergebnis lautet: %d", umsatzProEinwohner);
}