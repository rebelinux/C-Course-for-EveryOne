// Exercise RS-10: Write a C program to prompt for two strings and concatenate them as shown in in the Python code below. 
// Use the functions strcpy and strcat from the string.h library in your code. 
// Pre-allocate your character arrays large enought to handle up to 100 characters on input for each string 
// (i.e. do not use malloc as we have not yet covered that yet).

// Python Code
// print('Enter two strings');
// first = input()
// second = input()
// print(first + " & " + second)


#include <stdio.h>
#include <string.h>
int main() {
    char string1[100], string2[100];
    printf("Enter two strings\n");

    gets(string1);
    gets(string2);

    strcat(string1, " & ");

    // strcpy(string2, string1);

    printf("%s\n", string1);
}