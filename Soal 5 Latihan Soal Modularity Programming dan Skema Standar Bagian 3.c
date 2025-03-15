#include <stdio.h>

typedef struct {
    int data[100];        
} TabInt;

float HitungRerata(TabInt T, int N) {
    int sum = 0;
    for (int i = 0; i < T; i++) {
        sum += T.data[i];
    }
    return (float)sum / T;
}

int main() {
    TabInt T;
    printf("Masukkan jumlah elemen: ");
    scanf("%d", &T);

    printf("Masukkan elemen array:\n");
    for (int i = 0; i < T; i++) {
        scanf("%d", &T.data[i]);
    }

    printf("Rata-rata elemen: %.2f\n", HitungRerata(T));

    return 0;
}
