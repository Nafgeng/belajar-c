#include <stdio.h>

void kali_dua(int*num){
    *num = *num * 2;
}

void main(){
    int angka = 9;

    // memanggil fungsi
    kali_dua(&angka);

    // mencetak variable
    // setelah fungsi dipanggil
    printf("isi variable angka = %d\n", angka);
}