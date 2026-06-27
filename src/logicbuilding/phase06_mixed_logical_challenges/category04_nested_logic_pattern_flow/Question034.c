#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

void printArray(int[] values) {
    for (int __i_value = 0; __i_value < (int)(sizeof(values) / sizeof(values[0])); __i_value++) printf("%d", (int)(value)); printf("%s", " ");
    printf("\n");
}

int main(void) {
    // Question 34: : Check if an array is sorted (ascending or descending).
    int numbers[] = {4, -2, 7, 0, 7, 3};
    printArray(numbers);
    return 0;
}

/*
 * Explanation:
 * The value stored in `numbers` is the input that the conditions or loops work on.
 * The helper calculates the required result and returns it to the print statement.
 */
