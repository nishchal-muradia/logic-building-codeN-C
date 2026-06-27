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
    // Question 14: : Find the frequency of each character in a string (without using a map).
    char *text = "banana";
    boolean[] visited = new boolean[strlen(text)];
    for (int i = 0; i < strlen(text); i++) {
        if (visited[i]) continue;
        int count = 1;
        for (int j = i + 1; j < strlen(text); j++) {
            if (text[i] == text[j]) {
                visited[j] = true;
                count++;
            }
        }
        printf("%s", text[i]);
        printf("%s", " -> ");
        printf("%g", (double)(count));
        printf("\n");
    }
    return 0;
}

/*
 * Explanation:
 * The variables `text`, and `visited` hold the values that the logic checks, counts, or transforms.
 * The `for` loop starts with `int i = 0`, keeps running while `i < strlen(text)` is true, and updates using `i++`.
 * `charAt(i)` lets the code inspect one character at a time by index.
 * The condition `text[i] == text[j]` decides whether the current value matches the requirement.
 * The print statement shows each value as soon as that value is calculated inside the loop.
 */
