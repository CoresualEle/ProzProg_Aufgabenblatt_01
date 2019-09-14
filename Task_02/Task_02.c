#include "Task_02.h"

//  Helpers method to simplify number printing in Task_02().
void PrintValues(int a, int b, int c, int d) {
    printf("a: %d; b: %d; c: %d; d: %d\n", a, b, c, d);
}

// Berechnen Sie (ohne Hilfe des Computers) die Variablenwerte nach jeder Anweisung.
void Task_02() {
    //  Values assigned with 0 to avoid errors on printing unassigned variables.
    int a = 0, b = 5, c = 0, d = 0;

    a = b / 2;
    PrintValues(a, b, c, d);

    c = b % 2;
    PrintValues(a, b, c, d);

    d = b << a;
    PrintValues(a, b, c, d);

    b = 1 - --b;
    PrintValues(a, b, c, d);

    b *= -3;
    PrintValues(a, b, c, d);

    d %= 3;
    PrintValues(a, b, c, d);

    c += b * d + 4;
    PrintValues(a, b, c, d);

    a = --b + d++;
    PrintValues(a, b, c, d);

    d *= 3 * 2 + 1;
    PrintValues(a, b, c, d);

    a = 0;
    b = 2;
    c = 3;
    d = 4;
    PrintValues(a, b, c, d);

    a = (b + 2) * 2 * c + 1;
    PrintValues(a, b, c, d);

    a = ++b * d++ * ++c * (-1);
    PrintValues(a, b, c, d);

    a = d++ + d;
    PrintValues(a, b, c, d);
}