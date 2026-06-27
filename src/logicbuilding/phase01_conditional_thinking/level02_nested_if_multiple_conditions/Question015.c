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
    // Question 15: : Take the hour of the day (0-23) and print "Good Morning", "Good Afternoon", "Good Evening", or "Good Night".
    int hour = 16;
    if (hour >= 5 && hour < 12) printf("%s\n", "Good Morning");
    else if (hour >= 12 && hour < 17) printf("%s\n", "Good Afternoon");
    else if (hour >= 17 && hour < 21) printf("%s\n", "Good Evening");
    else printf("%s\n", "Good Night");
    return 0;
}

/*
 * Explanation:
 * The value stored in `hour` is the input that the conditions or loops work on.
 * The if/else checks test the important cases in order: `hour >= 5 && hour < 12`, `hour >= 12 && hour < 17`, `hour >= 17 && hour < 21`.
 * Only the branch whose condition becomes true prints its message.
 */
