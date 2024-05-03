// K&R Exercise 3-1.
// You should write a function called expand(s, t) that copies the string s to t expanding newlines and tabs to '\n' and '\t' respectively. 
// Use a switch statement (it will be a short switch statement). You can assume that the t variable contains enough space. 
// Make sure to properly terminate t with the end-of-string marker '\0'.

// Expected output from your program:
    // Hello world
    // Hello world\n
    // Hello\tworld\n
    // Hello\tworld\nHave a nice\tday\n

#include <stdio.h>
int main() {
  char t[1000];
  void expand();
  expand("Hello world", t);
  printf("%s\n", t);
  expand("Hello world\n", t);
  printf("%s\n", t);
  expand("Hello\tworld\n", t);
  printf("%s\n", t);
  expand("Hello\tworld\nHave a nice\tday\n", t);
  printf("%s\n", t);
}

void expand(s, t)
char s[], t[];
{
  int i, j;

  char tab = '\\';
  char tletter = 't';
  char newline = 'n';

  for(i=0, j=0; s[i]; i++) {
    switch (s[i])
    {
      case '\n':
        t[j++] = tab;
        t[j++] = newline;
        break;
      case '\t':
        t[j++] = tab;
        t[j++] = tletter;
        break;
      default:
        t[j++] = s[i];
        break;
    }
  }
  t[j] = '\0';
}

