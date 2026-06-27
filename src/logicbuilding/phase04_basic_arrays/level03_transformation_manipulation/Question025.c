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
    // Question 25: : Swap the first and last elements of the array.
    int numbers[] = {4, -2, 7, 0, 7, 3};
    int temp = numbers[0];
    numbers[0] = numbers[numbers.length - 1];
    numbers[numbers.length - 1] = temp;
    printArray(numbers);
    return 0;
}

/*
 * Explanation:
 * The variables `temp`, and `numbers` hold the values that the logic checks, counts, or transforms.
 * The helper calculates the required result and returns it to the print statement.
 */
