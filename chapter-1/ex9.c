#include <stdio.h>

/*
    i cheated this exercise
*/

main() {
    int c, previousChar;

    while ((c = getchar()) != EOF) {
        if (c == ' ' && previousChar == ' ')
            continue;
        
        putchar (c);

        previousChar = c;
    }
}