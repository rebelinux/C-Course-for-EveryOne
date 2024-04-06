#include <stdio.h>
int main() {
    int guest;

    while (scanf("%d", &guest) != EOF)
    {
        if (guest == 42) {
            printf("Nice work!\n");
            break;
        } else if (guest > 42) {
            printf("Too high - guess again\n");
        } else {
            printf("Too low - guess again\n");
        }
    } 
}