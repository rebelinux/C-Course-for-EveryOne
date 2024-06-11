// LBS290 Exercise 15. You are to perform the following steps in a function named process(): 
// (1) Print out the string you are passed. (2) Count the number of characters in the string. 
// (3) If there are more than 10 characters in the string print out the 9th character. 
// (4) Go through the string and replace every blank with a dash '-' (5) Print out the new string with dashes.

// Fun Fact:Dr. Chuck used this exact assignment while teaching C - LBS 290 - Fall 1991.

// Expected output from your program:
// String: Hi there and welcome to LBS290
// Count=30
// The ninth character is: a
// String: Hi-there-and-welcome-to-LBS290

// String: I love C
// Count=8
// String: I-love-C

// The main program which will execute your code:

#include <stdio.h>
#include <string.h>
int main() {
    char line[1000];
    void process();
    strcpy(line,"Hi there and welcome to LBS290");
    process(line);
    strcpy(line,"I love C");
    process(line);
}


void process(line)
    char line[];
{
    printf("\nString: %s\n",line);
}