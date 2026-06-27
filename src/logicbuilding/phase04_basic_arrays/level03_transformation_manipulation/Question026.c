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
    // Question 26: : Reverse an array (without using built-in reverse).
    int numbers[] = {4, -2, 7, 0, 7, 3};
    int left = 0, right = numbers.length - 1;
    while (left < right) {{
        int temp = numbers[left];
        numbers[left] = numbers[right];
        numbers[right] = temp;
        left++;
        right--;
    }}
    printArray(numbers);
    return 0;
}

/*
 * Explanation:
 * The variables `left`, `temp`, and `numbers` hold the values that the logic checks, counts, or transforms.
 * The helper builds the answer from the last digit or last character toward the first one.
 * The `while` or `do-while` loop keeps repeating until the changing value reaches the stopping condition.
 */
