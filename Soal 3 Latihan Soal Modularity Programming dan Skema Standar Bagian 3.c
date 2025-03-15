#include <stdio.h>

int main() {
    int a, b, c, temp;
    
    // Meminta input dari user
    printf("Masukkan nilai a: ");
    scanf("%d", &a);
    printf("Masukkan nilai b: ");
    scanf("%d", &b);
    printf("Masukkan nilai c: ");
    scanf("%d", &c);
    
    printf("Sebelum pertukaran: a = %d, b = %d, c = %d\n", a, b, c);
    
    // Menukar nilai a, b, c seperti pada kode awal
    temp = a;
    a = c;
    c = b;
    b = temp;
    
    printf("Setelah pertukaran: a = %d, b = %d, c = %d\n", a, b, c);
    
    return 0;
}
