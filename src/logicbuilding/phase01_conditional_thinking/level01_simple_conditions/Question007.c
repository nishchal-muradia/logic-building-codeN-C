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
    // Question 7: : Take three numbers and print the largest.
    int first = 20, second = 35, third = 12;
    int largest = first;
    if (second > largest) largest = second;
    if (third > largest) largest = third;
    printf("%s", "Largest = ");
    printf("%g", (double)(largest));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `first`, and `largest` hold the values that the logic checks, counts, or transforms.
 * The if/else checks test the important cases in order: `second > largest`, `third > largest`.
 * Only the branch whose condition becomes true prints its message.
 */
