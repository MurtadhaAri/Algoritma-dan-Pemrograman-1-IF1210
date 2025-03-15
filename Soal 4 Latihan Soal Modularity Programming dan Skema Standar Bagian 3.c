#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Tanggal;

int isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int getDaysInMonth(int month, int year) {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year)) return 29;
    return days[month - 1];
}

int IsTanggalValid(int d, int m, int y) {
    return (m >= 1 && m <= 12 && d >= 1 && d <= getDaysInMonth(m, y) && y > 0);
}

void BacaTanggal(Tanggal *t) {
    do {
        printf("Masukkan tanggal (dd mm yyyy): ");
        scanf("%d %d %d", &t->day, &t->month, &t->year);
    } while (!IsTanggalValid(t->day, t->month, t->year));
}

const char* NamaBulan(int month) {
    const char* nama[] = {"Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desember"};
    return nama[month - 1];
}

void TulisTanggal(Tanggal t) {
    printf("%d %s %d\n", t.day, NamaBulan(t.month), t.year);
}

Tanggal NextDay(Tanggal t) {
    if (t.day < getDaysInMonth(t.month, t.year)) {
        t.day++;
    } else {
        t.day = 1;
        t.month = (t.month == 12) ? 1 : t.month + 1;
        t.year += (t.month == 1);
    }
    return t;
}

int main() {
    Tanggal t;
    BacaTanggal(&t);
    printf("Tanggal hari ini: ");
    TulisTanggal(t);
    printf("Tanggal besok: ");
    TulisTanggal(NextDay(t));
    return 0;
}
