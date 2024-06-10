// Exercise RS-11: Write a C function called py_rstrip() that removes spaces from the end of a string. 
// This function modifies its parameter and should never be called with a constant value.

// Expected output from your program:
// -   Hello   World-


#include <stdio.h>
#include <string.h>
int main() {
    char s1[] = "   Hello   World    ";
    void py_rstrip();
    py_rstrip(s1);
    printf("-%s-\n", s1);
}

void py_rstrip(inp)
    char inp[];
{
    int len = strlen(inp);
    int i;
    char *px = inp;


    for (i = len -1; i <= len; i--) {
        if (px[i] == ' ') {
            px[i] = 0;
        } else{
            break;
        }
    }
}

