// Using 'extern' data

// You should write a function called bump() that uses an extern variable so that the 
// first time it is called, it returns int 0, the next time it returns 1 and so on.

// Expected output from your program:
// bump() returns 0
// bump() returns 1
// bump() returns 2
// bump() returns 3
// bump() returns 4

// The main program which will execute your code:
#include <stdio.h>

int main() {
  int bump();
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
}

extern int store;

int store = 0;

int bump()
{
  return store++;
}