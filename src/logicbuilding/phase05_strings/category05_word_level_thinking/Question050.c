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
    // Question 50: : Remove extra spaces between words (normalize spacing).
    char *sentence = "logic   building   is   fun";
    printf("%g", (double)(sentence.trim().replaceAll("\\s+", " ")));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `sentence` is the input that the conditions or loops work on.
 * The calculated answer is printed after the logic produces the final value.
 */
