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
    // Question 49: : Print the sentence in title case (first letter capital, rest lowercase).
    char *text = "LOGIC";
    printf("%g", (double)(text.toLowerCase()));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `text` is the input that the conditions or loops work on.
 * The calculated answer is printed after the logic produces the final value.
 */
