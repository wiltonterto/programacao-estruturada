#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int A = a, B = b, C = c;

    if (a > b) { int t = a; a = b; b = t; }
    if (b > c) { int t = b; b = c; c = t; }
    if (a > b) { int t = a; a = b; b = t; }

    printf("%d\n%d\n%d\n\n", a, b, c);
    
    printf("%d\n%d\n%d\n", A, B, C);

    return 0;
}