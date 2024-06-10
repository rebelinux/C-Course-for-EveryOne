// print('Enter US Floor')
// usf = int(input())
// euf = usf - 1
// print('EU Floor', euf)

# include <stdio.h>

int main() {
    int num;
    printf("Enter US Floor:\n");
    scanf("%d", &num);
    printf("EU Floor %d\n", num - 1);
}