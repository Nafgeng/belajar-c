#include <stdio.h>

int main(){
    //Membuat variabel
    char name[20], web_address[40];

    printf("Nafi : ");
    gets(name);

    printf("Alamat web : ");
    gets(web_address);

    printf("You enterred: %s\n", name);
    printf("Web addres: %s\n", web_address);

    return 0;
}