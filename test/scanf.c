#include <stdio.h>

int main(){
    //Membuat variabel
    char name[20], web_address[40];

    printf("Nama : ");
    scanf("%s", &name);

    printf("Alamat web : ");
    scanf("%s", &web_address);

    printf("\n...........\n");
    printf("Nama yang diinputkan: %s\n", name);
    printf("Alamat web: %s\n", web_address);

    return 0;
}