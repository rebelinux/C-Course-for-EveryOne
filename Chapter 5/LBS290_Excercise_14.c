// LBS290 Exercise 14. The program will create a 10 element array and read in 10 integers into the array. Then the program will print the integers backwards.
// Then the program will scan for entries in the array which contain the value 100 and print out the index of the entries with the number 100. 
// The program will also count the number of entries which equal 100. The program should work even if there are no entries which equal 100.
// See the sample output for the expect format of the output.

// Fun Fact:Dr. Chuck used this exact assignment while teaching C - LBS 290 - Fall 1991.

// This will be provided as input to your program: Copy
// 9
// 5
// 100
// 16
// 18
// 20
// 6
// 100
// 1
// 77

// Expected output from your program:
// numb[9] = 77
// numb[8] = 1
// numb[7] = 100
// numb[6] = 6
// numb[5] = 20
// numb[4] = 18
// numb[3] = 16
// numb[2] = 100
// numb[1] = 5
// numb[0] = 9

// Searching for entries equal to 100

// Found 100 at 2
// Found 100 at 7

// Found 2 entries with 100

#include <stdio.h>
int main() {
   int i, v, arr[10], count;
   for(i=0;i<10;i++) {
       scanf("%d", &v);
       arr[i] = v;
   }

   int *a = &arr[9];
   i = 9;

   while (*a && i >= 0) {
        printf("numb[%d] = %d\n",i,*a);
        a--;
        i--;
    }

//    for (i=9; i>=0; i--) {
//     printf("numb[%d] = %d\n",i,arr[i]);
//    }

   printf("\nSearching for entries equal to 100\n\n");

   i = 0;
   int *b = arr;
   while (*b && i <= 9) {
        // printf("i = %d, a = %d\n", i, *b);
        if (*b == 100) {
            printf("Found 100 at %d\n", i);
            count++;
        }
        i++;
        b++;
    }

//    for (i=0; i<10; i++) {
//     if (arr[i] == 100) {
//         printf("Found 100 at %d\n", i);
//         count++;
//     }
//    }

    printf("\nFound %d entries with 100\n", count);

}