// LBS290 Exercise 16 - A Calculator. In this program you will write a program which simulates a simple hand calculator which can add, 
// subtract, multiply, and divide floating point numbers. The calculator program has a display where the answer is always displayed 
// after each operation is done. This display is called the "accumulator" (in computerese).

// This will be provided as input to your program
// = 6.0
// * 7.0
// = 1.23
// + 5.0
// / 2.0
// * 6.3
// - 4.0

// Expected output from your program:
// Display: 6.00
// Display: 42.00
// Display: 1.23
// Display: 6.23
// Display: 3.12
// Display: 19.62
// Display: 15.62


#include <stdio.h>

int main()
{
    char line[256];
    char opcode;
    float value, display = 0.0, store;

    while(fgets(line, 256, stdin) != NULL) {
        // Use sscanf to parse data from a string
        sscanf(line, "%c %f", &opcode, &value);
        if ( opcode == 'S' ) break;

        if (opcode == '=') {
            display = value;
            store = value;
        } else {
            switch (opcode)
            {
            case '+':
                display = store += value;
                break;
            case '-':
                display = store -= value;
                break;
            case '/':
                display = store /= value;
                break;
            case '*':
                display = store *= value;
                break;
            
            default:
                break;
            }
        }

        printf("Display: %.2f\n", display);
    }
}