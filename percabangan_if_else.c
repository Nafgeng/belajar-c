#include <stdio.h>
#include <string.h>

// void main(){
//     // membuat array karakter untuk mennyimpan password
//     char password[30];

//     printf("=== Program Login ===\n");
//     printf("Masukan password:");
//     scanf("%s", &password);

//     // percabangan if/else
//     if ( strcmp(password,"kopi") == 0 )
//     {
//         printf("Selamat datang boss!\n");
//     } else {
//         printf("Password salah, coba lagi\n");
//     }
//     printf("Terimakasih sudah menggunakan aplikasi ini \n");
// }

void main(){
    char vokal[10];

    scanf("%s", &vokal);

    // percabangan if/else
    if ( strcmp(vokal,"A,a,I,i,U,u,E,e,O,o") == 0 )
    {
        printf("True\n");
    } else {
        printf("False\n");
    }
}