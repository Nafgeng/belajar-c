#include <stdio.h>

enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};

void main() {
    enum hari sekarang;
    sekarang = SENIN;
    printf("Sekarang Hari ke-%d", sekarang + 1);
}