#include "Task_07.h"

// Nach der Eingabe von Tagen soll angezeigt werden, wie viele Stunden, Minuten und
// Sekunden das jeweils sind.
// Beispiel: 5 Tage = 120 Stunden = 7.200 Minuten = 432.000 Sekunden
void Task_07() {
    int Days, Hours, Minutes, Seconds;

    printf("Days: ");
    scanf("%d", &Days);

    Hours = Days * 24;
    Minutes = Hours * 60;
    Seconds = Minutes * 60;

    printf("Days: %d; Hours: %d; Minutes: %d; Seconds %d", Days, Hours, Minutes, Seconds);
}