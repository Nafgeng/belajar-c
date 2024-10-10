#include <stdio.h>

void main(){
    char ulangi = 'y';
    int counter = 0;

    //pengulangan while
    while (ulangi == 'y'){
        printf("Apakah kau mau mengulang?\n");
        printf("Jawab (y/t): ");
        scanf(" %c", &ulangi);

        // increment counter
        counter++;
    }
    
    printf("\n\n---------\n");
    printf("Pengulangan Selesai!\n");
    printf("Kamu mengulang sebanyak %i kali. \n", counter);
}