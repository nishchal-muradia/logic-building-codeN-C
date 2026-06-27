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
    // Question 9: : Print Fibonacci series up to n terms recursively.
    int terms = 10;
    int first = 0, second = 1;
    for (int count = 1; count <= terms; count++) {
        printf("%g", (double)(first));
        printf("%s", " ");
        int next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `terms`, `first`, and `next` hold the values that the logic checks, counts, or transforms.
 * The `for` loop starts with `int count = 1`, keeps running while `count <= terms` is true, and updates using `count++`.
 * `System.out.println()` is used only to move to the next line after the pattern output is complete.
 */
