#include <stdio.h>

void main(){
    int nilai[10] = {11,22,33,44,55,66,77,88,99,100};


    int length = sizeof(nilai) / sizeof(*nilai);
    for (int i = 0; i < length; i++) {
        printf("Nilai ke-%d\n", nilai[i]);
    }
    printf("Banyaknya isi array nilai: %d\n", length);
}