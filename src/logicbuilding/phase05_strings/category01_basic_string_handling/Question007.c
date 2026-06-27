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
    // Question 7: : Take two strings and print them concatenated.
    char *first = "Code";
    char *second = "Nishchal";
    printf("%g", (double)(first + second));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `first`, and `second` hold the values that the logic checks, counts, or transforms.
 * The calculated answer is printed after the logic produces the final value.
 */
