#include <stdio.h>

#include "Task_00/Task_00.h"
#include "Task_01/Task_01.h"
#include "Task_02/Task_02.h"
#include "Task_03/Task_03.h"
#include "Task_04/Task_04.h"
#include "Task_05/Task_05.h"
#include "Task_06/Task_06.h"
#include "Task_07/Task_07.h"
#include "Task_08/Task_08.h"

int main() {
    int TaskNumber;

    printf("Enter the number of the Task to execute: ");
    scanf("%d", &TaskNumber);

    switch (TaskNumber) {
        case 0:
            Task_00();
            break;
        case 1:
            Task_01();
            break;
        case 2:
            Task_02();
            break;
        case 3:
            Task_03();
            break;
        case 4:
            Task_04();
            break;
        case 5:
            Task_05();
            break;
        case 6:
            Task_06();
            break;
        case 7:
            Task_07();
            break;
        case 8:
            Task_08();
            break;
        default:
            printf("Task %d not implemented.");
    }

    return 0;
}