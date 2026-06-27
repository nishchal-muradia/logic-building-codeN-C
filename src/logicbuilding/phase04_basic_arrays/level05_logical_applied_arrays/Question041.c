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
    // Question 41: : Check if the array is sorted in ascending order.
    int numbers[] = {1, 2, 3, 4};
    bool sorted = true;
    for (int i = 1; i < numbers.length; i++) if (numbers[i] < numbers[i - 1]) sorted = false;
    printf("%s", (sorted ? "Ascending" : "Not ascending"));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `sorted`, and `numbers` hold the values that the logic checks, counts, or transforms.
 * The `for` loop starts with `int i = 1`, keeps running while `i < numbers.length` is true, and updates using `i++`.
 * The condition `numbers[i] < numbers[i - 1]` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
