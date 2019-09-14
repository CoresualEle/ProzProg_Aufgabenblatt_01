#include "Task_04.h"

// Dieses Programm berechnet die Anzahl der Herzschläge seit Ihrer Geburt. Was muss im
// Programm geändert werden, damit die Gesamtzahl der Herzschläge ohne Nachkommastellen
// ausgegeben wird?
void Task_04() {
    float schlaege, alter;
    printf("\n\t\tHerzschlaege\n");
    printf("\nHerzschlaege pro Minute: \n");
    scanf("%f", &schlaege);
    printf("Alter in Jahren: \n");
    scanf("%f", &alter);
    printf("\nIhr Herz hat seit Ihrer Geburt ");

    // "%.0f" für keine Nachkommastellen
    printf("%.0f ", schlaege * 60 * 24 * 365.25 * alter);
    printf("mal geschlagen. ");
}