#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

int min(int[] values) {
    int answer = values[0];
    for (int __i_value = 0; __i_value < (int)(sizeof(values) / sizeof(values[0])); __i_value++) if (value < answer) answer = value;
    return answer;
}

int main(void) {
    // Question 5: : Find the minimum element in an array.
    int numbers[] = {4, -2, 7, 0, 7, 3};
    printf("%s", "Minimum = ");
    printf("%g", (double)(min(numbers)));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The value stored in `numbers` is the input that the conditions or loops work on.
 * The helper calculates the required result and returns it to the print statement.
 * The calculated answer is printed after the logic produces the final value.
 */
