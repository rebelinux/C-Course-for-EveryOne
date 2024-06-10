// Exercise 1-6: Count spaces and newlines

#include <stdio.h>
main() /* count new lines in input */
{
    int c, nl, b;
    nl = 0;
    b = 0;

    while ((c = getchar()) != EOF)
        if (c == '\n') {
            ++nl;
        }
        else if (c == ' ') {
            ++b;
        };
    printf("%d %d\n", b, nl);
}