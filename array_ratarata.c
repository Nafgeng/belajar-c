#include <stdio.h>

void main(){

    int tinggi_badan[10] = {175,165,166,157,184,156,163,176,171,169};

    int total = 0;

    for (int i = 0; i < 10; i++){
        total += tinggi_badan[i];
    }
    
    float rata_rata = total / 10.0;

    printf("Rata-Rata tinggi badan: %.2f cm\n", rata_rata);
}