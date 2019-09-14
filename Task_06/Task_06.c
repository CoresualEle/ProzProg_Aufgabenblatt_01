#include "Task_06.h"

// Lesen Sie den Radius eines Kreises ein und geben Sie den Flächeninhalt des Kreises aus
// (pi*r*r).
void Task_06() {
    float radius;

    printf("Radius (cm): ");
    scanf("%f", &radius);

    float inhalt = M_1_PI * sqrtf(radius);

    printf("Der Flächeninhalt ist: %.2f cm^2", inhalt);
}