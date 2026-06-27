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
    // Question 42: : Count how many words have even length.
    char *sentence = "logic building is fun";
    int count = 0;
    for (char *word : sentence.split("\\s+")) if (strlen(word) % 2 == 0) count++;
    printf("%s", "Count = ");
    printf("%g", (double)(count));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `sentence` is the input that the conditions or loops work on.
 * The loop goes word by word after splitting the sentence, so each word can be checked separately.
 * The variable `count` starts at 0 and increases only when the current item satisfies the question's condition.
 * `split("\\s+")` breaks the sentence wherever spaces appear, giving us separate words to process.
 * The condition `strlen(word) % 2 == 0` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
