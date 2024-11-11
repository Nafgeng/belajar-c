#include <stdio.h>

// membuat struct
struct Mahasiswa {
    char *name;
    char *address;
    int age;
};

int main() {
    // menggunakan struct
    struct Mahasiswa mhs1, mhs2;

    // mengisi nilai ke struct mhs1
    mhs1.name = "Nafi";
    mhs1.address = "Tangerang";
    mhs1.age = 17;

    // mengisi nilai ke struct mhs2
    mhs2.name = "Dimas";
    mhs2.address = "Bekasi";
    mhs2.age = 17;

    // mencetak isi struct mhs1
    printf("## Mahasiswa 1 ##\n");
    printf("Nama: %s\n", mhs1.name);
    printf("Alamat: %s\n", mhs1.address);
    printf("Umur: %d\n", mhs1.age);

    // mencetak isi struct mhs2
    printf("## Mahasiswa 2 ##\n");
    printf("Nama: %s\n", mhs2.name);
    printf("Alamat: %s\n", mhs2.address);
    printf("Umur: %d\n", mhs2.age);

    return 0;
}
