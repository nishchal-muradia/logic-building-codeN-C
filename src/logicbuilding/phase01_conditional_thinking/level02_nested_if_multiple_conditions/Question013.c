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
    // Question 13: : Take marks (0-100) and print the corresponding grade (A/B/C/D/F).
    int marks = 82;
    if (marks >= 90) printf("%s\n", "A");
    else if (marks >= 75) printf("%s\n", "B");
    else if (marks >= 60) printf("%s\n", "C");
    else if (marks >= 40) printf("%s\n", "D");
    else printf("%s\n", "F");
    return 0;
}

/*
 * Explanation:
 * The value stored in `marks` is the input that the conditions or loops work on.
 * The if/else checks test the important cases in order: `marks >= 90`, `marks >= 75`, `marks >= 60`.
 * Only the branch whose condition becomes true prints its message.
 */
