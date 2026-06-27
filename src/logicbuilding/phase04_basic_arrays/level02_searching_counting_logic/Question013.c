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
    // Question 13: : Find the first occurrence of a given number.
    int numbers[] = {4, 7, 2, 7, 9, 7};
    int target = 7;
    int firstIndex = -1;

    for (int i = 0; i < numbers.length; i++) {
        if (numbers[i] == target) {
            firstIndex = i;
            break;
        }
    }

    printf("%s", "First occurrence = ");
    printf("%g", (double)(firstIndex));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `target`, `firstIndex`, and `numbers` hold the values that the logic checks, counts, or transforms.
 * The `for` loop starts with `int i = 0`, keeps running while `i < numbers.length` is true, and updates using `i++`.
 * The condition `numbers[i] == target` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
