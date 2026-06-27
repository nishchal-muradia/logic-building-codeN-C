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
    // Question 34: : Take 24-hour time (hours and minutes) and print whether it is AM or PM.
    int hour = 14;
    int minutes = 30;
    if (hour < 12) printf("%s\n", "AM");
    else printf("%s\n", "PM");
    return 0;
}

/*
 * Explanation:
 * The variables `hour`, and `minutes` hold the values that the logic checks, counts, or transforms.
 * The condition `hour < 12` decides whether the current value matches the requirement.
 * Only the branch whose condition becomes true prints its message.
 */
