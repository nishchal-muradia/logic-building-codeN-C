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
    // Question 40: : Print numbers in a spiral-like pattern (conceptual dry run).
    int n = 3;
    int[][] matrix = new int[n][n];
    int value = 1, top = 0, bottom = n - 1, left = 0, right = n - 1;
    while (top <= bottom && left <= right) {
        for (int col = left; col <= right; col++) matrix[top][col] = value++;
        top++;
        for (int row = top; row <= bottom; row++) matrix[row][right] = value++;
        right--;
        for (int col = right; col >= left; col--) matrix[bottom][col] = value++;
        bottom--;
        for (int row = bottom; row >= top; row--) matrix[row][left] = value++;
        left++;
    }
    for (int[] row : matrix) printArray(row);
    return 0;
}

/*
 * Explanation:
 * The value stored in `n` is the input that the conditions or loops work on.
 * The helper calculates the required result and returns it to the print statement.
 * The outer loop controls each row of the pattern, and the inner loop controls what gets printed inside that row.
 * The `while` or `do-while` loop keeps repeating until the changing value reaches the stopping condition.
 */
