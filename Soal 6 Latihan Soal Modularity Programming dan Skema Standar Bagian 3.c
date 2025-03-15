#include <stdio.h>

typedef struct {
    int data[100];
    int Neff;
} TabInt;

float HitungRerata(TabInt T) {
    int sum = 0;
    for (int i = 0; i < T.Neff; i++) {
        sum += T.data[i];
    }
    return (float) sum / T.Neff;
}

int CariMin(TabInt T) {
    int min = T.data[0];
    for (int i = 1; i < T.Neff; i++) {
        if (T.data[i] < min) {
            min = T.data[i];
        }
    }
    return min;
}

int main() {
    TabInt T;
    
    printf("Masukkan jumlah elemen: ");
    scanf("%d", &T.Neff);
    
    printf("Masukkan elemen array: ");
    for (int i = 0; i < T.Neff; i++) {
        scanf("%d", &T.data[i]);
    }
    
    printf("Rata-rata: %.2f\n", HitungRerata(T));
    printf("Nilai minimum: %d\n", CariMin(T));
    
    return 0;
}
