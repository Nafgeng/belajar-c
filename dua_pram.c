#include <stdio.h>

void add(int a, int b){
    printf("%d + %d = %d\n", a, b, a + b);
}

void main(){
    add(1, 4);
    add(2, 3);
    add(4, 5);
}