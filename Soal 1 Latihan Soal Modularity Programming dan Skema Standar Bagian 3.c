#include <stdio.h>
int Max2 (int a, int b) {
    if (a >= b) {
        return a;
    }
    else {
        return b;
    }
    }
int Max3 (int a, int b, int c) {
    return Max2(Max2(a,b),c);
}
int main() {
    int x, y, z;
    scanf("%i %i", &x, &y);
    printf("%i\n", Max2(x, y));
    scanf("%i %i", &x, &y);
    printf("%i\n", Max2(x, y));
    scanf("%i %i %i", &x, &y, &z);
    printf("%i\n", Max3(x, y, z));
    scanf("%i %i %i", &x, &y, &z);
    printf("%i\n", Max3(x, y, z));
    return 0;
}
