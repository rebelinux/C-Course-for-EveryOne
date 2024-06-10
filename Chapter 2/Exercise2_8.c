// LBS290 Exercise 8. This program will prompt for 5 floating point numbers. 
// The program will print out the total of the five numbers and also print out the average.
// Fun Fact:Dr. Chuck used this exact assignment while teaching C - in LBS 290 - Fall 1991.

#include "stdio.h"

main () {
    float c[5];
    int i = 0;
    float a,t;

    t = 0;
    while (i < 5) {
        scanf("%f", &c[i]);
        t += c[i];
        i++;
    }

    printf("The total is: %.1f\n", t);
    printf("The average is: %.1f\n", t / 5);
}