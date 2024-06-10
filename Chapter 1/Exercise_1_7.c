// Exercise 1-7: Multiple spaces to one

#include <stdio.h>
main() {
    int c,bl;
    bl = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            bl++;
            if (bl == 1) {
                putchar(c);
            }
        } 
        else {
            bl = 0;
            putchar(c);
        }
    } 
}