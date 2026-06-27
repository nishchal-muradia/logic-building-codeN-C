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
    // Question 28: : Rotate an array by one position to the right.
    int numbers[] = {4, -2, 7, 0, 7, 3};
    int last = numbers[numbers.length - 1];
    for (int i = numbers.length - 1; i > 0; i--) numbers[i] = numbers[i - 1];
    numbers[0] = last;
    printArray(numbers);
    return 0;
}

/*
 * Explanation:
 * The variables `last`, and `numbers` hold the values that the logic checks, counts, or transforms.
 * The helper calculates the required result and returns it to the print statement.
 * The `for` loop starts with `int i = numbers.length - 1`, keeps running while `i > 0` is true, and updates using `i--`.
 */
