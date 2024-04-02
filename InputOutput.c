// print('Enter name')
// name = input()
// print('Hello', name)

#include <stdio.h>
int main() {
    char name;
    printf("Enter name\n");
    scanf("%s", &name);
    printf("Hello %s\n", &name);
}