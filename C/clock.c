#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define HOURS_IN_DAY 24
#define MINUTES_IN_HOUR 60

int main(void) {
    int noon = 0;
    for(int hour = 0; hour < HOURS_IN_DAY; hour++) {
        if(hour >= 12) {
            noon = 1;
        }
        for(int minute = 0; minute < MINUTES_IN_HOUR; minute++) {
            if(noon == 0) {
                printf("%i : %i %s\n", hour, minute, "AM");
            }
            else {
                printf("%i : %i %s\n", hour, minute, "PM");
            }
        }
    }
    return EXIT_SUCCESS;
}