#include <stdio.h>
#include <ctype.h>

void main(){

    char grade;

    printf("Inputkan grade: ");
    scanf("%c", &grade);

    switch (toupper(grade)){
    case 'A':
        printf("Luar biasa!\n");
        break;
    case 'B':
    case 'C':
        printf("Bagus!\n");
        break;
    case 'D':
    printf("Anda lulus ujian!\n");
    break;
    case 'E':
    case 'F':
    printf("Anda remedi!\n");
    break;
    default:
    printf("Grade salah!\n");
    }
}