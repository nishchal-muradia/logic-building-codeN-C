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
    // Question 9: : Find the index of the minimum element.
    int numbers[] = {4, -2, 7, 0, 9, 3};
    int minIndex = 0;

    for (int i = 1; i < numbers.length; i++) {
        if (numbers[i] < numbers[minIndex]) {
            minIndex = i;
        }
    }

    printf("%s", "Index of minimum = ");
    printf("%g", (double)(minIndex));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `minIndex`, and `numbers` hold the values that the logic checks, counts, or transforms.
 * The `for` loop starts with `int i = 1`, keeps running while `i < numbers.length` is true, and updates using `i++`.
 * The condition `numbers[i] < numbers[minIndex]` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
