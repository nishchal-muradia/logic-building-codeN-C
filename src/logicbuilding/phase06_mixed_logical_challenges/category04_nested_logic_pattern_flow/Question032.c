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
    // Question 32: : Print all pairs in an array whose sum equals a given number.
    int numbers[] = {1, 2, 3, 4, 5};
    int k = 6;
    for (int i = 0; i < numbers.length; i++) {
        for (int j = i + 1; j < numbers.length; j++) {
            if (numbers[i] + numbers[j] == k) printf("%s\n", numbers[i]); printf("%s", ", "); printf("%s", numbers[j]);
        }
    }
    return 0;
}

/*
 * Explanation:
 * The variables `k`, and `numbers` hold the values that the logic checks, counts, or transforms.
 * The `for` loop starts with `int i = 0`, keeps running while `i < numbers.length` is true, and updates using `i++`.
 * The condition `numbers[i] + numbers[j] == k` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
