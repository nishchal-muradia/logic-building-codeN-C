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
    // Question 29: : Reverse only characters, keeping digits in place.
    char *text = "a1b2c3";
    char[] chars = text.toCharArray();
    int left = 0, right = chars.length - 1;
    while (left < right) {
        if (isdigit(chars[left])) left++;
        else if (isdigit(chars[right])) right--;
        else {
            char temp = chars[left];
            chars[left] = chars[right];
            chars[right] = temp;
            left++;
            right--;
        }
    }
    printf("%g", (double)(new String(chars)));
    printf("\n");
    return 0;
}

/*
 * Explanation:
 * The variables `text`, `left`, `temp`, and `chars` hold the values that the logic checks, counts, or transforms.
 * The `while` or `do-while` loop keeps repeating until the changing value reaches the stopping condition.
 * The if/else checks test the important cases in order: `isdigit(chars[left])`, `isdigit(chars[right])`.
 * Only the branch whose condition becomes true prints its message.
 */
