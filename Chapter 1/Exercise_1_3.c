// Exercise 1-3: Fahrenheit / Celsius with Header
#include <stdio.h>
main() /* Fahrenheit-Celsius table */
{
    int fahr;
    printf("FAHR   CELSIUS\n");
    printf("---------------\n");
    for (fahr = 0; fahr <= 300; fahr = fahr + 40)
        printf("%4d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}