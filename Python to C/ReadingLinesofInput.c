// print('Enter line')
// line = input()
// print('Line:', line)

#include <stdio.h>
int main() {
    char sentence[1000];
    printf("Enter line\n");
    scanf("%[^\n]1000s", sentence);
    printf("Line: %s\n", sentence);
}