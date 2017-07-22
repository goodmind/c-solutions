#include <stdio.h>

main() {
    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\t')
            printf("\\t");
        if (c == '\b')
            printf("\0\b");
        if (c == '\\')
            putchar ('\\');
        putchar (c);
    }
}