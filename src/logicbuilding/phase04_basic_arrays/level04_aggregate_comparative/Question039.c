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
    // Question 39: : Create a frequency array of numbers (count occurrence of each number).
    int numbers[] = {4, -2, 7, 0, 7, 3};
    boolean[] visited = new boolean[numbers.length];
    for (int i = 0; i < numbers.length; i++) {{
        if (visited[i]) continue;
        int count = 1;
        for (int j = i + 1; j < numbers.length; j++) {{
            if (numbers[i] == numbers[j]) {{
                visited[j] = true;
                count++;
            }}
        }}
        printf("%s", numbers[i]);
        printf("%s", " -> ");
        printf("%g", (double)(count));
        printf("\n");
    }}
    return 0;
}

/*
 * Explanation:
 * The variables `numbers`, and `visited` hold the values that the logic checks, counts, or transforms.
 * The `for` loop starts with `int i = 0`, keeps running while `i < numbers.length` is true, and updates using `i++`.
 * The condition `numbers[i] == numbers[j]` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
