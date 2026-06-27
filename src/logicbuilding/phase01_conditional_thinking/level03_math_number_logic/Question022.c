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
    // Question 22: : Take a 3-digit number and determine if the middle digit is the largest, smallest, or neither.
    int number = 582;
    int hundreds = number / 100;
    int middle = (number / 10) % 10;
    int ones = number % 10;
    if (middle > hundreds && middle > ones) printf("%s\n", "Middle digit is largest");
    else if (middle < hundreds && middle < ones) printf("%s\n", "Middle digit is smallest");
    else printf("%s\n", "Middle digit is neither");
    return 0;
}

/*
 * Explanation:
 * The variables `hundreds`, `middle`, and `ones` hold the values that the logic checks, counts, or transforms.
 * The if/else checks test the important cases in order: `middle > hundreds && middle > ones`, `middle < hundreds && middle < ones`.
 * Only the branch whose condition becomes true prints its message.
 */
