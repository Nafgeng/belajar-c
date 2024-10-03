#include <stdio.h>
#include <string.h>

void main(){
    // membuat array karakter untuk mennyimpan password
    char password[30];

    printf("=== Program Login ===\n");
    printf("Masukan password:");
    scanf("%s", &password);

    // percabangan if/else
    if ( strcmp(password,"kopi") == 0 )
    {
        printf("Selamat datang boss!\n");
    } else {
        printf("Password salah, coba lagi\n");
    }
    printf("Terimakasih sudah menggunakan aplikasi ini \n");
}