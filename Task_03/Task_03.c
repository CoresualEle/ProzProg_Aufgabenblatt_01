#include "Task_03.h"

// Schreiben Sie ein Programm, das zwei Kommazahlen einlesen kann und daraus die Summe
// berechnet. Die Bildschirmausgabe könnte dabei so aussehen.
void Task_03() {
    float number_01, number_02;

    printf("Calculator");

    printf("\nPlease enter the first number: ");
    scanf("%f", &number_01);

    printf("\nPlease enter the second number: ");
    scanf("%f", &number_02);

    float result = number_01 + number_02;

    printf("The result is: %f", result);
}