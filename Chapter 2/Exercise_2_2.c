// You should write a function (no #include statements are needed) called htoi(str) 
// that converts hexadecimal constant (base-16 0-9 and a-f) to an integer. 
// There will not be a '0x' prefix (like in C) - just assume the input is a hex number. 
// You should not use ctype.h and your code can assume the ASCII character set.
// Each time you run the program, the values you need to convert 9027d (base-16) to
// 590461 (base-10) may be different each time you run the code.


#include <stdio.h>
int main() {
  int htoi();
  printf("htoi('9027d') = %d\n", htoi("9027d"));
  // printf("htoi('f') = %d\n", htoi("f"));
  // printf("htoi('F0') = %d\n", htoi("F0"));
  // printf("htoi('12fab') = %d\n", htoi("12fab"));
}

int htoi(s) /* convert hex to integer Optimize */
char s[];
{
  int hex,i,len,d,n;
  hex = i = d = len = n = 0;
  char c[1000];
  int p = 1;

  while ((c[len] = s[len])) len++;
    for (i=len - 1; i >= 0; i--) {
      c[d] = s[i];
      d++;
    }

  for (i=0; c[i] != '\0'; i++) {
    if (c[i] >= 'a' && c[i] <= 'f') {
      hex = c[i] -'a' + 10;
    } else if (c[i] >= 'A' && c[i] <= 'F') {
      hex = c[i] -'A' + 10;
    } else {
      hex = c[i] - '0';
    }
    if (i == 0) {
      n = n + hex;
    } else {
      p = p * 16;
      n = p * hex + n;
    }
  }
  return n;
}

// int htoi(s) /* convert hex to integer UnOptimize */
// char s[];
// {
//   int hex,i,len,d,n;
//   hex = i = d = len = n = 0;
//   char c[1000];
//   int p = 1;

//   while ((c[len] = s[len])) len++;
//     for (i=len - 1; i >= 0; i--) {
//       c[d] = s[i];
//       d++;
//     }

//   for (i=0; c[i] != '\0'; i++) {
//     if (c[i] == 'a' || c[i] == 'A') {
//       hex = 10;
//     } else if (c[i] == 'b' || c[i] == 'B') {
//       hex = 11;
//     } else if (c[i] == 'c' || c[i] == 'C') {
//       hex = 12;
//     } else if (c[i] == 'd' || c[i] == 'D') {
//       hex = 13;
//     } else if (c[i] == 'e' || c[i] == 'E') {
//       hex = 14;
//     } else if (c[i] == 'f' || c[i] == 'F') {
//       hex = 15;
//     } else {
//       hex = c[i] - '0';
//     }
 
//     if (i == 0) {
//       n = n + hex;
//     } else {
//       p = p * 16;
//       n = p * hex + n;
//     }
//   }

//   return n;
// }