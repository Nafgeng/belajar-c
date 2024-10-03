#include <stdio.h>

void main(){
    int a,b;

    // pengisian nilai dengan operator
    // a = 8;
    // b = 5;

    // pengisian sekaligus penambahan
    b += a; //ini sama seperti b = b + a
    printf("hasil b+= a adalah %d\n", b);

    // pengisian sekaligus pengurangan
    b -= a; //ini sama seperti b = b - a
    printf("hasil b+= a adalah %d\n", b);

    // pengisian sekaligus perkalian
    b *= a; //ini sama seperti b = b * a
    printf("hasil b*= a adalah %d\n", b);

    // pengisian sekaligus pembagian
    b /= a; //ini sama seperti b = b / a
    printf("hasil b/= a adalah %d\n", b);

    // pengisian sekaligus sisa bagi
    b %= a; //ini sama seperti b = b + a
    printf("hasil b = a adalah %d\n", b);
}