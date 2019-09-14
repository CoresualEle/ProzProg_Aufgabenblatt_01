#include "Task_05.h"

// Schreiben Sie ein Programm, das den Benzinverbrauch eines Autos in Litern je 100
// Kilometer errechnet. Als Eingabe benötigt das Programm den Benzinverbrauch insgesamt in
// Litern und die dazu gefahrenen Kilometer. Der Verbrauch pro 100 Kilometer ergibt sich dann
// aus: Liter * 100/km.
void Task_05() {
    float Liter, Strecke, Verbrauch;

    printf("Verbrauchtes Benzin (L): ");
    scanf("%f", &Liter);

    printf("\nStrecke (km): ");
    scanf("%f", &Strecke);

    Verbrauch = Liter * 100 / Strecke;

    printf("Der durchschnittliche Verbauch ist: %f", Verbrauch);
}