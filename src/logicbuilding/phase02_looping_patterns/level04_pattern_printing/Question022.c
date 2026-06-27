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
    // Question 22: Print an expanding and shrinking star pattern.
    int starCounts[] = {1, 2, 4, 5, 4, 3, 2, 1};

    for (int __i_stars = 0; __i_stars < (int)(sizeof(starCounts) / sizeof(starCounts[0])); __i_stars++) { int stars = starCounts[__i_stars];
        for (int count = 1; count <= stars; count++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    return 0;
}

/*
 * Explanation:
 * The outer loop controls the rows of the pattern.
 * Inner loops print the required spaces, stars, numbers, or letters for each row.
 * After each row is complete, System.out.println() moves the output to the next line.
 */
