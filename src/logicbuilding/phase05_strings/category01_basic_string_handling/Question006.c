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
    // Question 6: : Count how many words are in a sentence.
    char *sentence = "logic building is fun";
    String[] words = sentence.trim().split("\\s+");
    printf("%s", "Words = ");
    printf("%g", (double)(words.length));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `sentence`, and `words` hold the values that the logic checks, counts, or transforms.
 * `split("\\s+")` breaks the sentence wherever spaces appear, giving us separate words to process.
 * The calculated answer is printed after the logic produces the final value.
 */
