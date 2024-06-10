// K&R Exercise 1-17.
// You should write a function called reverse(s) that reverses the 
// characters in a string. Reverse the string in place.

#include <stdio.h>
#include <string.h>
int main() {
  char t[1000];
  char *copy();
  void reverse();
  copy("Hello world", t);
  printf("%s\n", t);
  reverse(t);
  printf("%s\n", t);
  reverse(copy("XY", t));
  printf("%s\n", t);
  reverse(copy("Even", t));
  printf("%s\n", t);
  reverse(copy("Odd", t));
  printf("%s\n", t);
  reverse(copy("civic", t));
  printf("%s\n", t);
}

/* copy s1 to s2; assume s2 big enough */
char *copy(s1, s2)
char s1[], s2[];
{
    int i;
    for(i=0;(s2[i] = s1[i]);i++);
    return s2;
}


// Optimize
void reverse(t)
char t[];
{
  int i,len,d;
  i = d = len = 0;
  char c[1000];

  while ((c[len] = t[len])) len++;
    for (i=len - 1; i >= 0; i--) {
      t[d] = c[i];
      d++;
    }
  return;
}

// Unoptimize
// void reverse(t)
// char t[];
// {
//   int len, d, i;
//   d = 0;
//   char c[1000];

//   for (len = 0; (c[len] = t[len]); len++) {
//   }

//   for (i=(len - 1); i >= 0; i--) {
//     t[d] = c[i];
//     d++;
//   }
//   return;
// }