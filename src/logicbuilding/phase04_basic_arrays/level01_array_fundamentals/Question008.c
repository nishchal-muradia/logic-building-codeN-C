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
    // Question 8: : Find the index of the maximum element.
    int numbers[] = {4, -2, 7, 0, 9, 3};
    int maxIndex = 0;

    for (int i = 1; i < numbers.length; i++) {
        if (numbers[i] > numbers[maxIndex]) {
            maxIndex = i;
        }
    }

    printf("%s", "Index of maximum = ");
    printf("%g", (double)(maxIndex));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `maxIndex`, and `numbers` hold the values that the logic checks, counts, or transforms.
 * The `for` loop starts with `int i = 1`, keeps running while `i < numbers.length` is true, and updates using `i++`.
 * The condition `numbers[i] > numbers[maxIndex]` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
