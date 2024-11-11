#include <stdio.h>

void main(){
    // membuat array kosong
    int nilai[5];

    // mengisi array
    nilai[0] = 32;
    nilai[1] = 42;
    nilai[2] = 'a';
    nilai[3] = 'w';
    nilai[4] = 57;

    // mencetak isi array
    printf("Nilai ke-1: %d\n", nilai[0]);
    printf("Nilai ke-2: %d\n", nilai[1]);
    printf("Nilai ke-3: %c\n", nilai[2]);
    printf("Nilai ke-4: %c\n", nilai[3]);
    printf("Nilai ke-5: %d\n", nilai[4]);
}