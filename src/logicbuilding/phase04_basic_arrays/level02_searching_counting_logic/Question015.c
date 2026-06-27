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
    // Question 15: : Check if all elements in an array are unique.
    int numbers[] = {4, -2, 7, 0, 7, 3};
    bool unique = true;
    for (int i = 0; i < numbers.length; i++) {{
        for (int j = i + 1; j < numbers.length; j++) {{
            if (numbers[i] == numbers[j]) unique = false;
        }}
    }}
    printf("%s", (unique ? "All unique" : "Duplicates found"));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `unique`, and `numbers` hold the values that the logic checks, counts, or transforms.
 * The `for` loop starts with `int i = 0`, keeps running while `i < numbers.length` is true, and updates using `i++`.
 * The condition `numbers[i] == numbers[j]` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
