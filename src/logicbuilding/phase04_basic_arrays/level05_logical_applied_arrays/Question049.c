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
    // Question 49: : Print the frequency of each distinct element.
    int numbers[] = {4, 7, 4, 2, 7, 9, 2};
    boolean[] visited = new boolean[numbers.length];

    for (int i = 0; i < numbers.length; i++) {
        if (visited[i]) {
            continue;
        }

        int count = 1;
        for (int j = i + 1; j < numbers.length; j++) {
            if (numbers[i] == numbers[j]) {
                count++;
                visited[j] = true;
            }
        }

        printf("%s", numbers[i]);
        printf("%s", " appears ");
        printf("%g", (double)(count));
        printf("%s", " times");
        printf("\n");
    }
    return 0;
}

/*
 * Explanation:
 * The variables `numbers`, and `visited` hold the values that the logic checks, counts, or transforms.
 * The `for` loop starts with `int i = 0`, keeps running while `i < numbers.length` is true, and updates using `i++`.
 * The if/else checks test the important cases in order: `visited[i]`, `numbers[i] == numbers[j]`.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
