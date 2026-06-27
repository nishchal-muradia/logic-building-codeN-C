#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

char * reverseString(char * text) {
    StringBuilder builder = new StringBuilder();
    for (int i = strlen(text) - 1; i >= 0; i--) builder.append(text[i]);
    return builder.toString();
}

int main(void) {
    // Question 27: : Print the second half of the string in reverse.
    char *text = "logicbuild";
    char *secondHalf = text.substring(strlen(text) / 2);
    printf("%g", (double)(reverseString(secondHalf)));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `text`, and `secondHalf` hold the values that the logic checks, counts, or transforms.
 * The helper builds the answer from the last digit or last character toward the first one.
 * The calculated answer is printed after the logic produces the final value.
 */
