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
    // Question 48: : Capitalize the first letter of each word.
    char *sentence = "logic building is fun";
    StringBuilder result = new StringBuilder();
    for (char *word : sentence.split("\\s+")) {
        result.append(toupper(word[0])).append(word.substring(1).toLowerCase()).append(" ");
    }
    printf("%g", (double)(result.toString().trim()));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `sentence` is the input that the conditions or loops work on.
 * The loop goes word by word after splitting the sentence, so each word can be checked separately.
 * A `StringBuilder` is used so characters or words can be added gradually while building the final string.
 * `split("\\s+")` breaks the sentence wherever spaces appear, giving us separate words to process.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
