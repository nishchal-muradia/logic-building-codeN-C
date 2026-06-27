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
    // Question 1: : Take a string input and print its length.
    char *text = "CodeWithNishchal";
    printf("%s", "Length = ");
    printf("%g", (double)(strlen(text)));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `text` is the input that the conditions or loops work on.
 * The calculated answer is printed after the logic produces the final value.
 */
