#include <stdio.h>

void main(){
    int matriks[4][4] = {
        {1,3,5,7},
        {7,5,3,1},
        {2,4,6,8},
        {8,6,4,2}
    };

    printf("Isi data pada indeks ke-(1,0): %d\n", matriks[2][1]);
}