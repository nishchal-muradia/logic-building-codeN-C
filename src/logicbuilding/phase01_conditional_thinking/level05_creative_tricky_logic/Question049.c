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
    // Question 49: : Take two dates (day and month) and determine which one comes first in the calendar.
    int day1 = 12, month1 = 5;
    int day2 = 10, month2 = 6;
    if (month1 < month2 || (month1 == month2 && day1 < day2)) printf("%s\n", "First date comes first");
    else if (month1 == month2 && day1 == day2) printf("%s\n", "Both dates are same");
    else printf("%s\n", "Second date comes first");
    return 0;
}

/*
 * Explanation:
 * The variables `day1`, and `day2` hold the values that the logic checks, counts, or transforms.
 * The if/else checks test the important cases in order: `month1 < month2 || (month1 == month2 && day1 < day2)`, `month1 == month2 && day1 == day2`.
 * Only the branch whose condition becomes true prints its message.
 */
