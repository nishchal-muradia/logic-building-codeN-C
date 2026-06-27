#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

int main(void) {
    // Question 44: : Take time (hours and minutes) and print the smaller angle between the hour and minute hands.
    int hours = 3;
    int minutes = 30;
    double hourAngle = (hours % 12) * 30 + minutes * 0.5;
    double minuteAngle = minutes * 6;
    double angle = abs(hourAngle - minuteAngle);
    if (angle > 180) angle = 360 - angle;
    printf("%s", "Smaller angle = ");
    printf("%g", (double)(angle));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `hours`, `minutes`, `hourAngle`, and `minuteAngle` hold the values that the logic checks, counts, or transforms.
 * The condition `angle > 180` decides whether the current value matches the requirement.
 * Only the branch whose condition becomes true prints its message.
 */
