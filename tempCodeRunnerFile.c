#include <stdio.h>
int main() {
    char sentence[1000];
    printf("Enter line\n");
    fgets (sentence, 1000, stdin);
    printf("Line: %s\n", sentence);
}