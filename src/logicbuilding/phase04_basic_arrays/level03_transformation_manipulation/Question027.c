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
    // Question 27: : Rotate an array by one position to the left.
    int numbers[] = {4, -2, 7, 0, 7, 3};
    int first = numbers[0];
    for (int i = 0; i < numbers.length - 1; i++) numbers[i] = numbers[i + 1];
    numbers[numbers.length - 1] = first;
    printArray(numbers);
    return 0;
}

/*
 * Explanation:
 * The variables `first`, and `numbers` hold the values that the logic checks, counts, or transforms.
 * The helper calculates the required result and returns it to the print statement.
 * The `for` loop starts with `int i = 0`, keeps running while `i < numbers.length - 1` is true, and updates using `i++`.
 */
