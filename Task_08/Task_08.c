#include "Task_08.h"

void Task_08() {
    int seconds, minutes, hours, days;
    int remainingSeconds, remainingMinutes, remainingHours;

    printf("Seconds: ");
    scanf("%d", &seconds);

    remainingSeconds = seconds % 60;
    minutes = seconds / 60;

    printf("\n%dm wih %ds remaining.", minutes, remainingSeconds);

    remainingMinutes = minutes % 60;
    hours = (minutes - remainingMinutes) / 60;

    printf("\n%dh wih %dm remaining.", hours, remainingMinutes);

    remainingHours = hours % 24;
    days = (hours - remainingHours) / 24;

    printf("\n%dm wih %ds remaining.", days, remainingHours);

    printf("\n%d Sekunden = %d Tage + %d Stunden + %d Minuten + %d Sekunden",
           seconds, days, remainingHours, remainingMinutes, remainingSeconds);
}