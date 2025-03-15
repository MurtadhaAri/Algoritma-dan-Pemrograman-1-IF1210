#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Tanggal;

Tanggal NextDay(Tanggal t) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (t.month == 2 && (t.year % 4 == 0 && (t.year % 100 != 0 || t.year % 400 == 0))) {
        daysInMonth[1] = 29;
    }
    
    if (t.day < daysInMonth[t.month - 1]) {
        t.day++;
    } else {
        t.day = 1;
        if (t.month == 12) {
            t.month = 1;
            t.year++;
        } else {
            t.month++;
        }
    }
    return t;
}

int main() {
    Tanggal t = {30, 4, 2024};
    Tanggal next = NextDay(t);
    printf("Next day: <%d, %d, %d>\n", next.day, next.month, next.year);
    return 0;
}
