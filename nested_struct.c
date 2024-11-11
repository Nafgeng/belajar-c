#include <stdio.h>

int main()
{
    // mendefinisikan struct Weapon
    struct Weapon
    {
        char *name;
        int attackPower;
        int range;
    };

    // mendefinisikan struct Player
    struct Player
    {
        char *name;
        int healthPoin;
        struct Weapon weapon;
    };
    // membuat object struct
    struct Player player1 = {
        .name = "Petani Kode",
        .healthPoin = 100,
        .weapon = {
            .name = "Katana",
            .attackPower = 30,
            .range = 100}};
    // print player dan weapon
    printf("== Player Status ==\n");
    printf("Player: %s\n", player1.name);
    printf("HP: %d%\n", player1.healthPoin);
    printf("-- ⚔ Weapon --\n");
    printf(" Name: %s\n", player1.weapon.name);
    printf(" Attack: %d\n", player1.weapon.attackPower);
    printf(" Range: %d\n", player1.weapon.range);
    return 0;
}