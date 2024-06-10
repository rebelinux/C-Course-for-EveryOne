// Exercise RS-12: Write a C function called py_lstrip() that removes whitespace (blanks, tabs, and newlines) from the beginning of a string. 
// This function modifies its parameter and should never be called with a constant value.


// Expected output from your program:
// -Hello   World    -


// The main program which will execute your code:
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char s1[] = "   Hello   World    ";
    void py_lstrip();
    py_lstrip(s1);
    printf("-%s-\n", s1);
}

void py_lstrip(inp)
    char inp[];
{
    char *px = inp;

    while (*px) {
        if (*px == ' ' || *px == '\t' || *px == '\n') {
            *px = '*';
            px++;
        } else {
            break;
        }
    }

    int i;
    int j = 0;
    int len = strlen(inp);

    for (i = 0; i <= len; i++) {
        if (px[i] != '*') {
            inp[i] = px[i];
        }
    }    
}

