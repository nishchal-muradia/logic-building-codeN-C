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
    // Question 45: : Count how many times a coin lands on heads/tails (use random).
    char *results[] = {"H", "T", "H", "H", "T"};
    int heads = 0, tails = 0;
    for (char *result : results) {
        if (result.equals("H")) heads++;
        else tails++;
    }
    printf("%s", "Heads = ");
    printf("%g", (double)(heads));
    printf("%s", ", Tails = ");
    printf("%g", (double)(tails));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `heads`, and `results` hold the values that the logic checks, counts, or transforms.
 * The `for` loop starts with `char *result : results) { if (result.equals("H")) heads++`, keeps running while `else tails++` is true, and updates using `} System.out.println("Heads = " + heads + ", Tails = " + tails`.
 * The condition `result.equals("H")` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
