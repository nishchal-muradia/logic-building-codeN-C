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
    // Question 8: : Take a temperature value and print "Cold", "Warm", or "Hot" using range conditions.
    int temperature = 31;
    if (temperature < 15) printf("%s\n", "Cold");
    else if (temperature <= 30) printf("%s\n", "Warm");
    else printf("%s\n", "Hot");
    return 0;
}

/*
 * Explanation:
 * The value stored in `temperature` is the input that the conditions or loops work on.
 * The if/else checks test the important cases in order: `temperature < 15`, `temperature <= 30`.
 * Only the branch whose condition becomes true prints its message.
 */
