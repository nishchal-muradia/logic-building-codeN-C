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
    // Question 38: : Find element-wise product of two arrays.
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};
    int result[] = new int[a.length];
    for (int i = 0; i < a.length; i++) result[i] = a[i] * b[i];
    printArray(result);
    return 0;
}

/*
 * Explanation:
 * The variables `a`, and `b` hold the values that the logic checks, counts, or transforms.
 * The helper calculates the required result and returns it to the print statement.
 * The `for` loop starts with `int i = 0`, keeps running while `i < a.length` is true, and updates using `i++`.
 */
