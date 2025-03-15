#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 3, temp;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    
    temp = a;
    a = c;
    c = b;
    b = temp;
    
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    
    return 0;
}
